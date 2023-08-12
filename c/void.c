#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {

    void *ptr;
    printf("%p\n", 100 + ptr);
    int *intptr = (int *)malloc(sizeof(int));
    ptr = intptr;
    ptr++;
    //free(ptr);
    *intptr = 0x01020304;
    char *cptr = (char *) intptr;
    for (int i = 0; i < 4; i++)
    {
        printf("%p:%d\t",(cptr + i),  *(cptr + i));
    }
        
}
