#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int a[3][4] = { {1,2,3,4} , {5,6,7,8} , {2,2,3,4,} };

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }
    // int *k;
    // int *(*pk)=&k;
    // printf("%d\n",*pk);
    // int a[2][3] = {1, 2, 3, 4, 5, 6};
    // int *p = &a;
    // *a[0] = 3;

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d\t", a[i][j]);
    //     }
    //     printf("\n");
    // }

    int a[3][2] = {1, 2, 3, 4, 5,6};
    int (*p)[2] = a;
    printf("%d\n", a[1][1]);
    printf("%d\n", *p[1]);//  *(p+1)
    printf("%d\n", p[1][1]);//  
    int b[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {3, 4, 5, 6, 7}};
    int (*q)[5] = b;

     for(int i=0;i<5;i++){
        printf("%d\t",b[0][i]);
     }
      printf("\n");
     for(int i=0;i<5;i++){
        printf("%d\t",q[0][i]);
     }
    printf("程序名: %s\n", argv[0]);
    printf("共收到 %d 个参数:\n", argc - 1);

    for(int i = 1; i < argc; i++) {
        printf("参数%d: %s\n", i, argv[i]);
    }
    // float a[3];
    // float b[2][3];
    // float c = 2.2, *p;
    // a[2] = c;
    // a = c;
    // scanf("%f", &a);
    // printf("%f", a[3]);
    // b[1][2] = a[2];
    // b[1] = a;
    // p = c;
    // p = a;

    return 0;
}
