#include <stdio.h>

int main()
{
    int n = 7, i, j;
    int x = -n / 2 + 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; i <= n; j++)
        {
            if (j == n / 2 + 1 || j == x || j == n - x + 1)
            {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
        x++;
    }
    return 0;
}