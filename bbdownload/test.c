#include <curl/curl.h>
#include <curl/easy.h>
int main(){
    CURL *handle;
    handle = curl_easy_init();
    curl_easy_setopt(handle, CURLOPT_URL,"https://api.bilibili.com/x/web-interface/view/detail?aid=170001") ;
    curl_easy_perform(handle);
    return 0;
}
