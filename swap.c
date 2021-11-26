#include <stdio.h>

int main()
{
    int x, y, temp;
    printf("Enter the two value of x and y");
    scanf("%d%d", &x, &y);
    printf("Before swaping x=%d y=%d", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swaping x=%d y=%d", x, y);
    return 0;
}