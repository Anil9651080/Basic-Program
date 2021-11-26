#include <stdio.h>
int main()
{
    char *names[6];
    char n[50];
    int len, i;
    char *p;
    int names[i] = p;
    for (i = 1; i <= 4; i++)
    {
        printf("Enetr the name");
        scanf("%s", n);
        len = strlen(n);
        p = malloc(len + 1);
        strcpy(p, n);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("\n%s", names[i]);
    }
    return 0;
}