#include <stdio.h>

// struct node
// {
//     char a ;
//     long double b ;
//     short c;

// };
// int main(int argc, char const *argv[])
// {
//     printf("%d",sizeof(struct node));
//     return 0;
// }
int data;
struct data
{
    unsigned int temp:8;
    unsigned int humi:8;

    unsigned char door1:1;
    unsigned char door2:1;
    unsigned char door3:1;
    unsigned char door4:1;

    unsigned char light1:1;
    unsigned char light2:1;
    unsigned char light3:1;
    unsigned char light4:1;
    unsigned char reserver:8;
};
int main(int argc, char const *argv[])
{
    printf("%ld\n",sizeof(struct data));
    struct data d;
    
    scanf("%x",(unsigned *)&d);
    printf("温度：%d\n",d.temp);
    printf("shi度：%d\n",d.humi);
    printf("door1:%s\n",d.door1? "开":"关");
    printf("door2:%s\n",d.door2? "开":"关");
    printf("door3:%s\n",d.door3? "开":"关");
    printf("door4:%s\n",d.door4? "开":"关");
    printf("light1:%s\n",d.light1? "开":"关");
    printf("light2:%s\n",d.light2? "开":"关");
    printf("light3:%s\n",d.light3? "开":"关");
    printf("light4:%s\n",d.light4? "开":"关");
    return 0;
}

// int sumArry(int a[],int length){
//     int i;
//     int sum=0;
//     for(i=0;i<length;i++){
//         for (int j = 0; j < length ; j++)
//         {
//            sum += a[i][j];
//         }
        
//     }
//     return sum;
// };
// int main(int argc, char const *argv[])
// {
//     int a[]={1,2,3};
    
//     printf("%d",sumArry(a,3));
//     return 0;
// }

// struct person
// {
//     char name[100];
//     int age;
// };
// void print (struct person p){
//     printf("%s%d/n",p.age);
//     printf("%s%d/n",p.age);
// }
