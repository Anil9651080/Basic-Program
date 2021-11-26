#include <stdio.h>

int main()
{
    struct employee
    {
        int id;
        int moblie;
        float salary;
    };
    struct employee e1, e2, e3;
    scanf("%d %d   %f", &e1.id, &e2.moblie, &e3.salary);
    scanf("%d %d %f", &e2.id, &e2.moblie, &e2.salary);
    scanf("%d %d %f", &e3.id, &e3.moblie, &e3.salary);
    printf("Print value");
    printf("\n%d %d   %f", &e1.id, &e2.moblie, &e3.salary);
    printf("\n%d %d %f", &e2.id, &e2.moblie, &e2.salary);
    printf("\n%d %d %f", &e3.id, &e3.moblie, &e3.salary);
}