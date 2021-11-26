#include <stdio.h>

int main()
{
    int n;
    printf("Enter the total number of element ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the value of the target element ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if ((arr[i] + arr[j]) == target)
            {
                printf("{%d %d}", arr[i], arr[j]);
            }
        }
    }

    return 0;
}