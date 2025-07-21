#include <stdio.h>
int main(int argc, char const *argv[])
{
    //常目标指针（常用/大量使用）
    int a[]={1,2,3,4,5};
    const int *p;
    p=&a;
    printf("%d\n",*p+1);

    //常指针（不常用
    int b=200;
    int *const q=&b;
    b=100;
    *q=100;
    printf("%d\n",*q);
    return 0;
}
