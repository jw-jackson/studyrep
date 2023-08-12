#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (argc == 1 || argc > 3) {
        printf("error\n");
        return 1;
    }

    if (argc == 3) {
        if (strcmp("-n", argv[1]) != 0) {
            printf("option error\n");
            return 1;
        }
        printf("%s", argv[2]);
        return 0;
    }
    printf("%s\n", argv[1]);

    return 0;
}
