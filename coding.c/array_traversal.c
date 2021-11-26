#include <stdio.h>

int main()
{
    int a[50], size, i;
    printf("Enter the size of array");
    scanf("%d", &size);
    printf("Enter the element of array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Element of array:are-");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}