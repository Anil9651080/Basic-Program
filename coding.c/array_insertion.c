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
    printf("Enter data you want to insert:");
    scanf("%d", &num);
    printf("Enter postion");
    scanf("%d", &pos);
    for (i = size - 1; i < pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;
    for (i = 0; i < size; i++)
    {
        printf("data:%d", a[i]);
        return 0;
    }
}