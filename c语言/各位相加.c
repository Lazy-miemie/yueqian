#include <stdio.h>
int addDigits(int num)
{
    while (num >= 10)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
}
void test(){
    char string[10];
    char *str1="0123456789";
    strcpy(string,str1);
}
int main(int argc, char const *argv[])
{
   
    return 0;
}
