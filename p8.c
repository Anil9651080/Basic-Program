#include <stdio.h>

int main()

{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j <= i)
            {
                printf("*");
            }
            printf("");
        }
        printf("\n");
    }
}