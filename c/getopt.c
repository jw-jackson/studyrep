
// int getopt(int argc, char * const argv[], const char *optstring);
//
//
// 四个全局变量
// char *optarg 保存选项参数
// int optind 记录下一个索引位置
// int opterr 是否将错误信息输出到 stderr
// int optopt 不在选项字符串 optstring 中的选项
//
//
//
//
// 选项字符串
// : 一个冒号表示这个选项后面必须有参数，选项和参数之间空格可有可无
// :: 两个冒号表示选项的参数是可选的，如果有，选项和参数值之间必须有空格
// 没有表示后面不能有参数
//
// cd 表示 -c -d 可以合在一起
// 不以 - 开头的并且不跟在选项后面的，不会被 getopt() 解析
// 调用完 getopt 后 optind 会指向第一个非选项和参数的位置
// 若输入了额外的参数， 则 optind 等于 argc
//
//
// ./a.out shenme -a hello -b world
// 新版 argv 会是 ./a.out -a hello -b world shenme
//
//
// optind opterr 的初始值都是 1
//
//
// optind 就是 argv[] default
//

#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    char ch;
    // opterr = 0;
    while ((ch = getopt(argc, argv, "a:b:c:d:")) != -1) {
        printf("%d\n", optind);
        switch (ch) {
        case 'a': printf("a\n"); break;
        case 'b': printf("b\n"); break;
        case 'c': printf("c\n"); break;
        case 'd': printf("d\n"); break;
        case '?': printf("unknow option\n"); break;
        }
    }
    return 0;
}
