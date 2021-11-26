#include <stdio.h>

int main()
{
    int a, b, c, i, n;

    a = 0;
    b = 0;
    printf("Enter n for how many times genreate series");
    scanf("%d", &n);
    printf("Fibonacci series\n");
    printf("%d %d", a, b);
    for (i = 0; i <= n; i++)
        a = b;
    {
        c = a + b;
        b = c;
        printf("%d", c);
    }
    return 0;
}