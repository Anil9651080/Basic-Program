#include <stdio.h>

int main()
{
    int i, j, num, sum = 0;
    float avg;
    printf("Enter number of student");
    scanf("%d", &num);
    int marks[num];
    printf("Enter the marks of all student\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }

    avg = (float)sum / num;
    printf("Average=%d", avg);
}