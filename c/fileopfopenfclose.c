/***
*
* The fopen() function opens the  file  whose  name  is  the  string pointed to by pathname and associates a stream with it.

***/


/***
* 文件流
* 数据在文件和内存之间传递的过程称为文件流
* 从文件复制到内存的过程叫做输入流
* 从内存复制到文件的过程叫做输出流
*
* 文件是数据源的一种，还包括数据库网络硬件等
***/



/***
* stdin stdout stderr 是由系统打开的 可以直接使用
* FILE *fopen(const char *pathname, const char *mode);
* r+ 读写 文件必须存在
* w+ w and r+ 相当于删除原文件再创建一个
* a+ a and r+ 不存在则创建，存在的追加
*
*
* 控制读写 （可以不写）
* t 文本文件 默认
* b binary file
* 控制读写方式必须放在中间或者尾部
***/
#include <stdio.h>
int main(int argc, char *argv[])
{
    
    FILE *file = fopen(argv[1], "r"); 

    if (file == NULL)
        return 1;


    fclose(file);
    return 0;
}








