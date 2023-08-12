#include <unistd.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    
    // whatis unlink
    // man 2 unlink
    printf("%d\n", unlink(argv[1]));

    // int unlink(const char *pathname); 
    // 删除文件
    // 并不一定会完全删除，若连接数大于1只会减少连接数

    return 0;
}
