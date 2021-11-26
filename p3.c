#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter any number you want to find");
    scanf("%d", &n);
    for (i = n; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("#");
        }
        printf("");
    }
    printf("\n");
}