#include <stdio.h>

int main()
{
    // int max_int = (unsigned int)~0 >> 1;
    // printf("%d\n", max_int);
    // return 0;

    // int afjdl_changshu = 6;
    // int moerzhiliang = 18;

    // double liters;
    // double grams;
    // double moles;
    // double molecules;

    // printf("请输入水的升数:");
    // scanf("%lf", &liters);

    // grams = liters * 1000;
    // moles = grams / moerzhiliang;
    // molecules = moles * afjdl_changshu;

    // printf("%.2f 升水包含约 %.3e 个水分子\n", liters, molecules);

    // return 0;

    // int s=0;
    // int n =100;
    // for(int i=1;i<=n;i++){
    //     s=n*(n+1)/2;
    // }
    // printf("1+2+...+%d=%d\n",n,s);

    // int a;
    // scanf("%d",&a);
    // printf("%d星期零%d天",a/7,a%7);

    // int x = 10;
    // int a, b, c;
    // a = x++;
    // b = ++x;
    // c = 10*x++;
    // printf("x=%d,a=%d,b=%d,c=%d\n", x, a, b, c);
    // return 0;

    // float a;
    // scanf("%f", &a);
    // printf("输入华氏温度:%.2f\n", a);
    // float c = 5 * (a - 32) / 9;
    // printf("摄氏温度为:%.2f\n", c);

    // unsigned char a, b, c;
    // a = 0x3;
    // b = a|0x8;
    // c = b<<1;

    // printf("%d%d\n", b, c);

    // unsigned int packets[] = {0x12344520, 0xff004B1C, 0x00553C1E};
    // int count = sizeof(packets) / sizeof(packets[0]);

    // for (int i = 0; i < count; i++)
    // {
    //     unsigned int packet = packets[i];

    //     int temp = packet & 0xFF;
    //     int humi = (packet >> 8) & 0xFF;
    //     int doors = (packet >> 16) & 0x0F;
    //     int lights = (packet >> 20) & 0x0F;

    //     printf("数据包: 0x%08X\n", packet);
    //     printf("温度：%d°C 湿度：%d\n", temp, humi);
    //     printf("门状态: 门0-%d 门1-%d 门2-%d 门3-%d\n",
    //            (doors >> 0) & 1, (doors >> 1) & 1, (doors >> 2) & 1, (doors >> 3) & 1);
    //     printf("灯状态: 灯0-%d 灯1-%d 灯2-%d 灯3-%d\n\n",
    //            (lights >> 0) & 1, (lights >> 1) & 1, (lights >> 2) & 1, (lights >> 3) & 1);
    // }
    // return 0;

    // for (char i = 'a'; i <= 'z'; i++)
    // {
    //     printf("%c", i);
    // }
    // return 0;

    // char lines;
    // printf("输入大写字母:");
    // scanf("%c",&lines);

    // int n=lines-'A'+1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         printf(" ");
    //     }
    //     for(char a='A';a<='A'+i;a++){
    //         printf("%c",a);
    //     }
    //     for(char a='A'+i-1;a>='A';a--){
    //         printf("%c",a);
    //     }
    //     printf("\n");
    // }
    // return 0;

    // int spaces = 0, letters = 0, others = 0;
    // char c;

    // printf("请输入内容（按回车结束）：\n");

    // while ((c = getchar()) != '\n')
    // {
    //     if (c == ' ')
    //     {
    //         spaces++;
    //     }
    //     else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    //     {
    //         letters++;
    //     }
    //     else
    //     {
    //         others++;
    //     }
    // }

    // printf("空格：%d\n字母：%d\n其他字符：%d\n", spaces, letters, others);
    // #include <limits.h>
    //    unsigned long long n;
    //    unsigned long long num,max=0;
    //    for(n=2;n<ULLONG_MAX;n++);{
    //     int count = 0,a=0,b=0;
    //     while (a>1)
    //     {
    //         if(a%2==0){
    //             a/= 2;
    //         }else{
    //             a=3*a-1;
    //         }
    //         count++;
    //     }
    //     if(count>max){
    //         max=count;
    //         num=b;
    //     }
    //     printf("数字[%llu]经过%5d次变换到达黑洞中心,变换次数%d",n,count,max);
    //    }

    // #include <limits.h>
    // #include <stdbool.h>
    //     {
    //         int n;
    //         scanf("%d", &n);

    //         for (int i = 2; i < n + 1; i++)
    //         {
    //             if (prime(i))
    //                 printf("%d\t", i);
    //         }
    //         printf("\n");
    //     }

    //     return 0;
    // }
    // bool prime(int num)
    // {
    //     int i;
    //     for (i = 2; i * i < (num + 1); i++)
    //  {
    //     if (num % i == 0)
    //             return false;
    //     }
    //     return true;
    int *p;
    int a[2][2] = {{1, 0}, {2, 3}};
    p = a[0];
    printf("%d, %d", *p, *(p + 1));
}