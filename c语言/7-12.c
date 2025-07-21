#include <stdio.h>
#include <stdbool.h>
#include "inline.h"
// bool isPowerOfTwo(int n)
// {
//     return n > 0 ? ((n & (n - 1) == 0) ? true : false) : false;
// }
// int main(int argc, char const *argv[])
// {
//     printf("%d\n",max2(1,2));
//     printf("%d\n",max2(1,2));
//     printf("%d\n",max2(1,2));
//     printf("%d\n",max2(1,2));
//     printf("%d\n",max2(1,2));
//     return 0;
// }
void reverse (char *str){
    int left = 0;
    int right = strlen(str)-1;
    if (left<right)
    {
        char temp=left;
        str[left]=str[right];
        temp=str[right];
        left++;
        right--;
    }
    return str;
}