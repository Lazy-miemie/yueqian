#include <stdio.h>

// 本函数接收一个数组，数组的大小可以每次不同
void maxValue(int n, int a[n])
{
    // 输出数组a中的n个元素的最大值
    //
    if (a <= 0)
    {
        printf("数组为空\n");
        return 0;
    }

    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("数组最大值为%d\n", max);
}

int main(int argc, char const *argv[])
{
    int a[5] = {1, 2, 3, 4, 5};
    int len = 3;

    int b[len];
    b[0] = 4;
    b[1] = 5;
    b[2] = 2;

    // 求出len个元素中的最大值
    maxValue(len, b);

    len = 5;
    int c[len];
    c[0] = 1;
    c[1] = 11;
    c[2] = 111;
    c[3] = 12;
    c[4] = 13;

    maxValue(len, c);

    len = 6;
    len = 3;

    return 0;
}
