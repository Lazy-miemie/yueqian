#include <stdio.h>

// 编写一个函数，使其能记录自身被调用的次数。
// int self()
// {
//     static int use_self = 0;
//     use_self++;
//     printf("%d\n", use_self);
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     self();
//     self();
//     self();
//     return 0;
// }

// 编写一个函数，使其返回3个整型参数中的最大值。
// int the_max(int a,int b,int c){
//     int  max = a;
//     if(b>max)max=b;
//     if(c>max)max=c;
// }
// int main(int argc, char const *argv[])
// {
//     int a=30;int b=15;int c=99;
//     printf("%d\n",the_max(a,b,c));
//     return 0;
// }

// 编写一个函数myPower(x，N)，输入给底数x和幂指数N,计算输出x的N次方。其中x可以是任意浮点数，N是整数
// float mypower(float x, int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     return mypower(x, n - 1) * x;
// }
// int main(int argc, char const *argv[])
// {
//     printf("输入一个基数一个幂：");
//     float x;
//     int n;
//     scanf("%f,%d", &x, &n);

//     if (x == 0 && n == 0)
//     {
//         printf("无意义\n");
//     }
//     if (x == 0 && n != 0)
//     {
//         printf("%f^%d=0\n", x, n);
//     }
//     if (x != 0 && n == 0)
//     {
//         printf("%f^%d=1\n", x, n);
//     }
//     else if (n < 0)
//     {
//         printf("%f^%d = %.6f", x, n, 1 / mypower(x, n));
//     }
//     else
//     {
//         printf("%f^%d = %.6f", x, n, mypower(x, n));
//     }

//     return 0;
// }

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                int* ret = malloc(sizeof(int) * 2);
                ret[0] = i, ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}


