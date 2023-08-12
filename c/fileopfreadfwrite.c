/***
* fread, fwrite - binary stream input/output
* 读取写入 块数据 
* 因此文件应该以二进制方式打开
* size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);

* size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
* ptr 内存指针，可以是数组变量结构体等
* size 表示每个数据块的字节数
* count 要读写的数据块的块数
* fp 文件指针
*
*
* fwrite 可以使用 ferror 检测错误
* fread 可以是用 ferror and feof 检测
***/


#include <stdio.h>
int main(int argc, char *argv[])
{
    
    FILE *file = fopen(argv[1], "rb");
    if (file == NULL){
        return 1;
    }

    char buf[10];
    fread(buf, 1, 10, file);
    for (int i = 0; i < 10; i++)
    {
        printf("%c\n",buf[i]);
    }
    fclose(file);
    return 0;
}
