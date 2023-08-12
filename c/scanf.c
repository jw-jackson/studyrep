#include <stdio.h>
int main(int argc, char *argv[])
{
    char *pathname = "/etc/passwd";

    FILE *file = fopen(pathname, "r");

    char name[1024];
    int uid;
    int gid;
    char home[1024];
    char shell[1024];
    char null[1024];
    scanf("%[^:]:x:%d:%d:%*[^:]:%[^:]:%s\n", name, &uid, &gid, home, shell);
    // scanf("%[^:]:x:%d:%d:%*[^:]:%[^:]:%s\n",name,&uid, &gid, home, shell);
    // scanf("%[^:]",name);
    printf("%s\n", name);
    printf("%d\n", uid);
    printf("%d\n", gid);
    printf("%s\n", home);
    printf("%s\n", shell);
    return 0;
}
