#include <stdio.h>
int addition(int num1, int num2);
int hello()
{
    printf("Hello anil sharma how are you");
}
int main()
{
    // int var1, var2, res, c;
    // printf("Enter number 1:");
    // scanf("%d", &var1);
    // printf("Enter number 2:");
    // scanf("%d", &var2);
    // res = addition(var1, var2);

    // printf("Output:%d", res);

    int c = addition(3, 5);
    printf("%d\n", c);
    int d = addition(5, 5);
    printf("%d", d);
    hello();

    return 0;
}

int addition(int num1, int num2)

{
    int sum = 0;
    sum = num1 + num2;
    return sum;
}