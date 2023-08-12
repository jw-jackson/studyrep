#include <unistd.h>
#include <fcntl.h>
int main(int argc, char *argv[])
{
    
    // off_t lseek(int fd, off_t offset, int whence);
    int fd = open(argv[1], O_RDWR);
    if (fd < 0)
        return 0;

    off_t a = lseek(fd, 10, SEEK_SET);
    char buf[10] = "*";
    // 注意写的时候会覆盖
    // 01234567890abcdefghigklmn
    // 0123456789*abcdefghigklmn
    write(fd, buf, 1);
    close(fd);
    return 0;
}
