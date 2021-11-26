#include <stdio.h>

int main()

{
    int a[50], size, i, num, pos;
    printf("Enter the size of array");
    scanf("%d", &size);
    printf("Enter the element of array");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("postion you want to delete:");
    scanf("%d", &pos);
    if (pos <= 0 && pos > size)
    {
        printf("invalid pos");
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        size--;
    }
}