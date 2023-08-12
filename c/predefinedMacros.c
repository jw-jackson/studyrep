// 预定义的宏是编译器设定好的
#include <stdio.h>


void f1();
int main()
{

    // 编译的时间  并非运行时间
    printf(__DATE__ "\n");
    printf(__TIME__ "\n");
    printf(__FILE__ "\n");  
    printf("%d\n", __LINE__ );
    printf("%d\n", __STDC__);
    printf("%s\n", __FUNCTION__);  
    f1();
    printf("%lu\n", sizeof(void*));
    return 0;
}

void f1()
{

    printf("%s\n", __func__);

}
