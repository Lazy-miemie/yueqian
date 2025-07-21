#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int(*p1);
    p1 = &a;
    

    float f;
    float(*p2);
    p2 = &f;


    char s[8];
    char(*p3);
    p3 = &s[8];


    int b[2][3];
    int(*p4);
    p4 = &b;


    void f(int a);
    void *p5;
    p5 = &f;


    return 0;
}
