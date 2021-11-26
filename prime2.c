#include <stdio.h>

int main()
{
    int i, j, ch = 0;
    printf("Enter any number");
    scanf("%d", &i);
    if (i <= 1)

        ch = 1;
    while (j <= i / 2)
    {
        if (i % j == 0)
        {
            ch = 1;
            break;
        }
        else
        {
            j++
        }
    }
    if (ch == 0)
    {
        printf("%d is prime number", i);
    }
    else
    {
        printf("%d is not prime number", i);
    }
}
}