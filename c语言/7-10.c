#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float mypower(float x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return mypower(x, n - 1) * x;
}
int main(int argc, char const *argv[])
{
    printf("输入一个基数一个幂：");
    float x;
    int n;
    scanf("%f,%d", &x, &n);

    if (x == 0 && n == 0)
    {
        printf("无意义\n");
    }
    if (x == 0 && n != 0)
    {
        printf("%f^%d=0\n", x, n);
    }
    if (x != 0 && n == 0)
    {
        printf("%f^%d=1\n", x, n);
    }
    else if (n < 0)
    {
        printf("%f^%d = %.6f", x, n, 1 / mypower(x, n));
    }
    else
    {
        printf("%f^%d = %.6f", x, n, mypower(x, n));
    }

    return 0;
}
