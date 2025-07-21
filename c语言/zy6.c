#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char pingjie (char s1[],char s2[]){
//     strcpy(s1+strlen(s1),s2);
//     return s1;
// }

// int main(int argc, char const *argv[])
// {
//     char s1[]={"abc"};
//     char s2[]={"cxy"};
//     pingjie(s1,s2);
//     printf("%s",s1);
//     return 0;
// }
// int f(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     return (n - 2) + f(n - 1);
// }

// int main(int argc, char const *argv[])
// {
//     int a;
//     scanf("%d", &a);
//     printf("%d", f(a));
//     return 0;
// }
void rem(char s[])
{
    int j = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != ' ')
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(int argc, char const *argv[])
{
    char buf[100];
    fgets(buf, sizeof(buf), stdin);
    buf[strcspn(buf, "\n")] = 0;
    rem(buf);
    printf("%s\n", buf);
    return 0;
}
