#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int i;
//     int *p;
//     int *k;
//     int a[3];
//     int *b[3];

//     int a[3];
//     int *q;
//     q=&a[3];
// }
//

// int main(int argc, char const *argv[])
// {
//     int a[] = {1, 2, 3, 4};
//     int i, *p;
//     for (i = 0, p = a; i < 4; i++, p++)
//     {
//         printf("%d %d\n", a[i], *p);
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int a[]={};
//     int b[]={};
//     int c[]={};
//     void func1(){
//         c[]=a[]+b[];
//     }
//     return 0;
// }

// void sumary(int a[], int b[], int c[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         c[i] = a[i] + b[i];
//     }
// }
// int main(void)
// {
//     int a[4] = {1, 2, 3, 4};
//     int b[4] = {4, 5, 6, 7};
//     int c[4];
//     sumary(a, b, c, 4);
//     int i;
//     for (i = 0; i < 4; i++)
//     {
//         printf("%d\t", c[i]);
//     }
//     printf("\n");
//     return 0;
// }

#include <stdbool.h>
int main(int argc, char const *argv[])
{
    int dec;
    bool negative = false;
    printf("输入一个十进制数：");
    scanf("%d",&dec);
    if (dec<0)
    {
        negative=true;
        dec=-dec;
    }
    char hex[10];
    int i;
    for ( i = 0; i < 10&&dec!=0; i++)
    {
        switch (dec%16)
        {
        case 0 ... 9:
        hex[i]=dec%16+'0';
        break;
        case 10 ... 15:
        hex[i]=dec%16-10+'A';
        break;
        }
        dec /=16;
    }
    if (i>=10)
    {
        printf("数字太大，无法计算");
        return 0;
    }
    printf("十六进制数为%c0x", negative? '-': ' ');
    int j;
    for (j=i-1;j>=0;j--)
    {
        printf("%c",hex[j]);
    }
    printf("\n");
    return 0;
    
    

}