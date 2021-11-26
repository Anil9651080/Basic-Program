#include <stdio.h>
#include <math.h>

int main()
{
    int number, i = 0, n, result = 0, number1, temp;
    printf("Enter the number:");
    scanf("%d", &number);
    number1 = number;
    temp = number;
    while (number != 0)
    {
        number = number % 10;
        i++;
    }
    while (number1 != 0)
    {
        n = number1 % 10;
        result = result + pow(n, i);
        number1 = number1 / 10;
    }
    if (temp == result)
        printf("number is armstrong");
    else
        printf("number is not armstrong");
    return 0;
}