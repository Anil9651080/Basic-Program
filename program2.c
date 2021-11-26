#include <stdio.h>

int main()
{
    int rev = 0, n = 321;

    printf("Befpre reverse = %d\n", n);
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n % 10;
    }
    printf("After reverse number = %d", rev);
    return 0;
}