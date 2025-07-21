#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // 语法规定：
    // 1, p指向的目标类型是未定的
    // 2, p与其他任意类型的指针是兼容的
    // 3, 不能对p解引用（即不能取目标）
    void *p;

    int *k1;
    char *k2;
    p = k1;
    p = k2;

    // 常见的一个地方
    // 从内存申请20个字节，并返回这块内存的入口地址
    int  *q1 = malloc(20);
    char *q2 = malloc(20);
    struct node *q3 = malloc(20);

    // 一般不直接使用void *指针
    void *m = malloc(20); // m --> |         20字节       |
    
    // 课堂小练习：
    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n",(int*)m+i);
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(int *)m+i);
    }
    
    

    return 0;
}
