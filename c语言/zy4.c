#include <stdio.h>
#include <limits.h>

// 4
//  int maxsum(int arr[], int n)
//  {
//      int max_sum = INT_MIN;
//      int current_sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         current_sum = (current_sum + arr[i])>arr[i] ? current_sum + arr[i] : arr[i];
//         if (current_sum > max_sum)
//         {
//             max_sum = current_sum;
//         }
//     }
//     return max_sum;
// }

// int main(void)
// {
//     int a[7] = {-2, 5, -1, 6, -4, -8, 6};
//     int sum = 0;
//     int n = (sizeof(a) / (sizeof(a[0])));
//     printf("%d", maxsum(a, n));

//     return 0;
// }

// 6

// void (*signal(int sig, void (*func)(int)))(int);

// int main(int argc, char const *argv[])
// {
//     char c[]={};
//     printf("输入：");
//     scanf("%s\n", &c);

//     return 0;

// }

// 5
void cpy(int m, int n, int a[m][n], int b[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[3][2] = {{1, 2}, {3, 4},{5,6}};
    int b[3][2];

    cpy(3, 2, a, b);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d", b[i][j]);
        }
    }

    return 0;
}
