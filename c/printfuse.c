#include <stdio.h>
int main()
{

    //extern int printf (const char *__restrict __format, ...);
    // return: the sum of char, negative number when error
    // three part in restrict_format:
    // 1. 字符串常量
    // 2. 格式控制字符串
    // 3. 转义字符
    

    // referenct: https://blog.csdn.net/K346K346/article/details/52252626

    // 格式控制字符串组成
    // %[flags][width][.prec][length]type

    // type 
    /**
        * d/i   int 
        * o     unsigned int    无符号 8 进制整数
        * u     unsigend int    无符号 10
        * x/X   unsigend int    无符号 16 进制 x 对应 abcdef X 对应 ABCDEF
        * f/lf  float(double)
        * F
        * e/E   float(double)   科学计数法，使用指数 Exponent 表示浮点数
        * g/G   float(double)   根据数值长度，选择最短方式输出
        * c     char   
        * s     char*
        * S
        * p     void*
        * n
        * %
        * m
        * a/A
        *
    **/
    
    // flag
    /**
        * -
        * +
        * space
        * #
        * 0
    **/
    // 指明宽度对齐
    printf("***flag***\n");
    printf("%10d\n",12345);
    printf("%-10d\n",12345);
    printf("%+d\t%+d\n", 1, -1);

    
    // space 为正输出 space 为负输出 -
    printf("% d\n",1);
    printf("% d\n",-1);








    // 最小宽度
    printf("***最小宽度***\n");
    // 直接给出
    printf("%10d\n", 12345);

    // 参数给出
    printf("%*d\n", 10, 12345);
    return 0;
}
