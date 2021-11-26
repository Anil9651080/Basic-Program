#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int age[n], i;
    printf("Enter the age of the patients\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }
    int total[n];
    int count = 0;
    if (age[i] < 17)
    {
        total[count] = total[i] * n;
        total[count] = n + 500;
        count++;
    }
    else if (age[i] > 17 && age[i] < 40)
    {
        total[count] = total[i] * n;
        total[count] = n + 400;
        count++;
    }

    else
    {
        total[count] = n + 200;
        total[count] = total[i] * n;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d", total[n]);
    }

    return 0;
}