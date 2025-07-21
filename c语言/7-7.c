#include <stdio.h>

struct student
{
    int age;
    float sorce;
    char sign[0];
};

int main(int argc, char const *argv[])
{
    struct student *jack = malloc(sizeof(struct student)+200);
    strcpy(jack->sign,"asdfghjkl");
    printf("jack的签名：%s\n",jack->sign);


    struct student *xiaoying = malloc(sizeof(struct student)+90000);
    strcpy(xiaoying->sign,"大傻逼");
    printf("xiaoying的签名：%s\n",xiaoying->sign);
    

    int w[10];
    int (*pw)[10];
    int (**pw2)[10];
    pw=&w;
    pw2=&pw;
    w[1]=666;
    *pw[0]=666;
    **pw2[0]=666;
    printf("%d\n",w[1]);
    printf("%d\n",*pw[0]);
    printf("%d\n",**pw2[0]);

    return 0;
}
