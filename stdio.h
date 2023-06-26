#define size_t unsigned long
#define NULL ((void*)0)

extern int write(int fd, char *buf, int nlen);
extern char read(int fd, char *buf, int nlen);

size_t strlen(char *buf)
{
    size_t size = 0;
    while (*buf != '\0')
    {
        size++;
        buf++;
    }

    return size-1;
}

int stoi(char *buf)
{
    unsigned short i = 1;
    int res = 0;
    while (*buf != '\0')
    {
        printf("%c\n", *buf);
        res = (res * 10) + (*buf - '0');
        buf++;
    }

    return res;
}