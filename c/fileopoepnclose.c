#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    
    int fd = open(argv[1], O_RDWR);
    printf("fd is %d\n",fd); 
    close(fd);
    return 0;
}


// reference: https://www.cnblogs.com/eastnapoleon/p/3309917.html
// man 2 oepn
// int open(const char *pathname, int flags);
// int open(const char *pathname, int flags, mode_t mode);
// flags 
// O_RDONLY 以只读方式打开文件。
// O_WRONLY 以只写方式打开文件。
// O_RDWR 以可读写方式打开文件。
// 上述三种旗标是互斥的，也就是不可同时使用，但可与下列的旗标利用 OR(|)运算符组合。
// O_CREAT 若欲打开的文件不存在则自动建立该文件。
// O_EXCL 如果O_CREAT也被设置，此指令会去检查文件是否存在，文件若不存在则建立该文件，否则将导致打开文件错误。此外，若O_CREAT与O_EXCL同时设置，并且欲打开的文件为符号连接，则会打开文件失败。
// O_NOCTTY 如果欲打开的文件为终端机设备时。则不会将该终端机当成进程控制终端机。
// O_TRUNC 若文件存在并且以可写的方式打开时，此旗标会令文件长度清为0。而原来存于该文件的资料也会消失。
// O_APPEND 当读写文件时会从文件尾开始移动，也就是所写入的数据会以附加的方式加入到文件后面。
// O_NONBLOCK 以不可阻断的方式打开文件，也就是无论有无数据读取或等待，都会立即返回进程之中。
// O_NDELAY 同O_NONBLOCK。
// O_SYNC 以同步的方式打开文件。
// O_NOFOLLOW 如果参数pathname所指的文件为一符号连接，则会令打开文件失败。
// O_DIRECTORY 如果参数pathname所指的文件并非为一目录，则会令打开文件失败。



// mode 当且仅当 flags 为 O_CREAT 是有效 指定新创建文件的权限
// 00*** 等同 chmod
