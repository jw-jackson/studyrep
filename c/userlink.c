#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct user
{
    struct user *next;
    char *name;
    unsigned int uid;
    unsigned int gid;
    char home[64];
    char shell[64];
};


void read(struct user **user_ptr);
int main(int argc, char *argv[]) { 


    struct user* the_user;
    the_user = NULL;
    read(&the_user);






    return 0; }


void read(struct user **user_ptr)
{
    char *pathname = "/etc/passwd";

    FILE *file = fopen(pathname, "r"); 

    struct user *temp_user = malloc(sizeof(struct user)); 
    char name[64];
    
    while( fscanf(file,"%[^:]:x:%d:%d:%*[^:]:%[^:]:%s\n",
                  name,&temp_user -> uid, &temp_user -> gid,  temp_user -> home, temp_user -> shell) != EOF){
        printf("%s\n", name);
        temp_user -> next = *user_ptr;
        *user_ptr = temp_user;
        temp_user = malloc(sizeof(struct user));
    }

    free(temp_user);


}
