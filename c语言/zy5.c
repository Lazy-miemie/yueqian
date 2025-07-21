#include <stdio.h>
// void  getString(char  **p)
// {
//     *p = "hello world";
// }

// int main(void)
// {
//     char *str = NULL;
//     getString(&str);
//     printf("%s\n",  str);
// }

void diaoyong()
{
    static int dy = 0;
    dy++;
    printf("%d\n", dy);
}
int main(int argc, char const *argv[])
{
    diaoyong();
    diaoyong();
    return 0;
}
