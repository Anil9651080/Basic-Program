#include <stdio.h>

int main()
{
    int i, j;
    float salary, bonus;
    char gender;
    printf("Enter M for Male f for Female\n");
    scanf("%c,&gender");
    printf("Enter the salary\n");
    scanf("%f", &salary);
    if (gender == 'M' || gender == 'm')
    {
        if (salary > 10000)

            bonus = (float)(salary * 0.05);

        else

            bonus = (float)(salary * 0.07);
    }
    if (gender == 'F' || gender == 'f')
    {
        if (salary > 10000)

            bonus = (float)(salary * 0.01);

        else

            bonus = (float)(salary * 0.12);
    }
    salary = salary + bonus;
    printf("Bonus=%.2f\nSalary=%.2f\n", bonus, salary);
}