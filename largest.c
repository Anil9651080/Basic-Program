#include <stdio.h>

int main()
{
    int i, size, max = 0, min = 0;
    printf("Enter the size to fimd the largest and smallest element");
    scanf("%d", &size);
    int a[size];
    printf("Enter number in array\n ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] > min)
        {
            min = a[i];
        }
    }
    printf("The largestnumber is %d\n", max);
    printf("The smalleast number is %d\n", min);
}