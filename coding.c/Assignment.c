#include <stdio.h>
int main()
{
    float *p;

    float var = 20.5;
    p = &var;
    printf("Value of variable var is :%f", var);
    printf("\nValue of variable var is :%f", *p);
    printf("\nAddress of variable var is :%p", &var);
    printf("\nAddress of variable var is :%p", p);
    printf("\nAddress of variable var is :%p", &p);
    return 0;
}