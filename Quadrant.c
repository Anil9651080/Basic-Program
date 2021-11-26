#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the (x,y) co-ordinates\n");
    scanf("%f%f", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("Co-ordinattes (%f, %f) lies in first quadant\n", x, y);
    }
    if (x < 0 && y > 0)
    {
        printf("Co-ordinattes (%f, %f) lies in second quadant\n", x, y);
    }
    if (x < 0 && y < 0)
    {
        printf("Co-ordinattes (%f, %f) lies in third quadant\n", x, y);
    }
    if (x > 0 && y < 0)
    {
        printf("Co-ordinattes (%f, %f) lies in fourth quadant\n", x, y);
    }
    if (x == 0 && y == 0)
    {
        printf("Co-ordinattes (%f, %f) lies in  origin\n", x, y);
    }
}