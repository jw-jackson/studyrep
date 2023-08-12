/**
* 文件压缩 
* 每 3 个字符取第一个
* 
**/

#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
        return 1;

    FILE *in, *out;
    in = fopen(argv[1], "r");

    if (in == NULL)
    {
        fprintf(stderr, "open error\n");
    }

    char name[64];
    memset(name, 0, sizeof(name));
    strcpy(name, argv[1]);
    strcat(name, ".red");
    
    out = fopen(name, "w+");
    if (out == NULL)
    {
        fprintf(stderr, "open error\n");
    }
    
    char ch;
    int count = 0;
    while ( (ch = getc(in)) != EOF)
    {
        if (count % 3 == 0)
        {
            putc(ch, out);
        }
        count++;
    }
    fclose(out);
    fclose(in);
    return 0;
}
