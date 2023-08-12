#include <stdio.h>
#define square(x) ((x) * (x))

#define Max(x, y) (x) > (y) ? (x) : (y)

// # 字符串常量运算符
#define print(a) \
    printf(#a "\n")

#define print2(x) \
    printf("%s", x)

#define printsum(x,y) \
	printf("the sum of " #x " and " #y " is:%d\n", ((x) + (y))) 


// ## 标记粘贴运算符

#define printintx(x) \
    printf("int" #x "=%d\n", int##x)
int main()
{

    printf("%d\n", square(2));

    printf("%d\n", Max(10, 20));

    // \n
    print("hello\n");
    print2("jackson\n");

    printsum(10,20);
    int int1 = 1;
    printintx(1);
    return 0;
}
