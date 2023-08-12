#include <unistd.h>
#include <stdio.h>


// access, faccessat - check user's permissions for a file
// int access(const char *pathname, int mode);
// mode specifies the accessibility check to be performed
// F_OK R_OK W_OK X_OK
// check whatever the calling process can access the file pathname
// return value: 
// 0 all requested permissions success
// -1 not all
int main(int argc, char *argv[])
{
    
    printf("%d\n", access(argv[1], F_OK | W_OK)); 
    return 0;
}
