#include <curl/curl.h>
#include <curl/easy.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "cjson/cJSON.h"
#include <stdlib.h>

#ifdef DEBUG
#define DPRINTF(format,...) \
do {printf("%s::%s "format, __FILE__,__FUNCTION__,##__VA_ARGS__);} while(0)
#else
#define DPRINTF
#endif


static int Generate(char **qrCodeUrl_ptr, char **qrCodeKey_ptr);
static int Poll(char * qrCodeKey);


static size_t write_callback(void *contents, size_t size, size_t nmemb, void *stream);


/**
 * 使用二维码登录
 *
 *
 **/
static CURL *handle;
int LoginByQRCode(){
    handle = curl_easy_init();
    // 保存 cookie
    curl_easy_setopt(handle, CURLOPT_COOKIEJAR, "./cookie_file.txt"); 

    char* qrCodeUrl = NULL;
    char* qrCodeKey = NULL;
    Generate(&qrCodeUrl,&qrCodeKey);

    char ch;
    printf("please 'y' to continue\n");
    do {
        ch = getchar();
    } while (ch != 'y' && ch != 'Y');
    Poll(qrCodeKey);

    // clean and store cookie
    curl_easy_cleanup(handle);

    free(qrCodeKey);
    free(qrCodeUrl);

    return 0;
}



/**
* get QRcode url
*
*
*
**/


static size_t write_callback(void *contents, size_t size, size_t nmemb, void *stream){
    cJSON **cjson_ptr = (cJSON **)stream;
    *cjson_ptr = cJSON_Parse((char*)contents);
    return size * nmemb;
}


static int Generate(char **qrCodeUrl_ptr, char **qrCodeKey_ptr){
    cJSON *responseJson;
    char *generate_url = "https://passport.bilibili.com/x/passport-login/web/qrcode/generate";
    curl_easy_setopt(handle, CURLOPT_URL, generate_url);
    curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, write_callback); 
    curl_easy_setopt(handle, CURLOPT_WRITEDATA, &responseJson); 
    curl_easy_perform(handle);

    cJSON *dataJson = cJSON_GetObjectItem(responseJson, "data");

    cJSON *dataUrlJson = cJSON_GetObjectItem(dataJson, "url");
    *qrCodeUrl_ptr = strdup(dataUrlJson -> valuestring);
    DPRINTF("url: %s\n",*qrCodeUrl_ptr);

    cJSON *dataQrCodeKeyJson= cJSON_GetObjectItem(dataJson, "qrcode_key");
    *qrCodeKey_ptr = strdup(dataQrCodeKeyJson -> valuestring);
    DPRINTF("qrcode_key: %s\n",*qrCodeKey_ptr);
    cJSON_Delete(responseJson);

    return 0;
}


static int Poll(char * qrCodeKey){
    char *pollUrl = "https://passport.bilibili.com/x/passport-login/web/qrcode/poll"; 
    
    char *pollUrlWithParam = (char *)malloc(strlen(pollUrl) + strlen(qrCodeKey) + 32);
    sprintf(pollUrlWithParam, "%s?qrcode_key=%s",pollUrl, qrCodeKey); 

    DPRINTF("pollUrlWithParam: %s\n", pollUrlWithParam);

    curl_easy_setopt(handle, CURLOPT_URL, pollUrlWithParam);
    curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, write_callback); 

    cJSON *responseJson;
    curl_easy_setopt(handle, CURLOPT_WRITEDATA, &responseJson); 
    curl_easy_perform(handle);

    DPRINTF("responseJson: %s\n", cJSON_Print(responseJson));
    cJSON_Delete(responseJson);
    return 0;
}






/**
* 开发手册
* API 命名为Get Post api末尾
* 返回类型为 Json
*
*
*
*
*
*
*
**/
