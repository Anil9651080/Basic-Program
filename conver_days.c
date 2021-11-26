#include <stdio.h>

int main()
{
    int nodays, year, weeks, days;
    printf("Enter the total days\n");
    scanf("%d", &nodays);
    year = nodays / 365;
    weeks = (nodays % 365) / 7;
    days = (nodays % 365) % 7;
    printf("%d = %d year, %d weeks, %d days", nodays, year, weeks, days);
}