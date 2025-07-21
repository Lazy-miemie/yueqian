#include <stdio.h>
#include <string.h>
char *toLowerCase(char *s)
{   
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        s[i]=tolower(s[i]);
    }
    return s;
}
int main(int argc, char const *argv[])
{
    char arr[]={"Sfdf"};
    printf("%s\n",toLowerCase(arr));
    return 0;
}
