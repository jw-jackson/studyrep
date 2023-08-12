#include <stdio.h>
#include <limits.h>
int main()
{
    printf("int\t%lu\t",sizeof(int));
    printf("%d ~ %d\n",INT_MIN, INT_MAX);

    printf("unsigned int\t%lu\t",sizeof(unsigned int));
    printf("%u ~ %u\n", 0, UINT_MAX);
    
    printf("long\t%lu\n",sizeof(long));
    printf("%lu ~ %ld\n", LONG_MIN, LONG_MAX);

    printf("unsigned long\t%lu\t",sizeof(unsigned long));
    printf("%ul ~ %lu\n", 0, ULONG_MAX);

    printf("char\t%lu\n",sizeof(char));
    printf("unsigned char\t%lu\t",sizeof(unsigned char));
    printf("short\t%lu\t",sizeof(short));
    printf("%d ~ %d\n", SHRT_MIN, SHRT_MAX);
    
    printf("float\t%lu\t",sizeof(float));
    printf("double\t%lu\t",sizeof(double));
    printf("***************************\n");

    short x = 127;
    printf("overflow short x = %d + 1: %d\n", SHRT_MAX, x = SHRT_MAX + 1);
    return 0;
}
