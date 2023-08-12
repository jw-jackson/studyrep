#include <stdio.h>
#define print1(a) \
    printf(#a)
#define print2(a) \
    printf(#a "\n")

int main()
{
    
    
    print1("hello\n");
    print2("hello");
    
    return 0;

}
