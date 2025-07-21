#include <stdio.h>

int main(void)
{
    int a, b;
    while (1)
    {
        int retval = scanf("%d,%d", &a, &b);
        if (retval == 0)
        {
            printf("请输入int类型\n");
            char s1[10];
            fgets(s1, 10, stdin);
        }
        else if (retval == 2)
        {
            printf("%d %d\n", a, b);
            break;
        }
    }
}