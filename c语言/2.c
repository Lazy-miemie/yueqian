#include <stdio.h>

int main()
{
    typedef int INT;
    int a = 100;
    INT b = 100;

    typedef char BUF[10];
    char buf1[10];
    BUF buf2;
    printf("%ld\n", sizeof(buf1));
    printf("%ld\n", sizeof(buf2));
}