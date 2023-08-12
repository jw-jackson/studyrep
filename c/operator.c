#include <stdio.h>
int main()
{
    int i = 0xf0000000;
    printf("%x\n", i);
    printf("%d\n", i);
    printf("%x\n", i << 1);

    
    // <<
    // 当且仅当最高两位不同是可做移位乘法
    // 否则溢出
    printf("%d\n",i << 1);



    // >>
    printf("%x\n", i >> 1);
    i = 0x80000000;
    printf("%d\n", i >> 1);
    printf("%d\n", i >> 3);
    printf("*******************\n");
    unsigned ii = 0x80000000;
    printf("%x\n", ii >> 1);
    printf("%u\n",ii >> 1);
    
    return 0;
}


