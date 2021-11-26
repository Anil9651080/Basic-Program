#include <stdio.h>

int main()
{
    int c = 0;
    char s[1000], d[1000] = "my program";
    printf("Before copying, the string :%s\n", d);
    printf("Input a string to copy:%s\n", d);
    gets(s);
    while (s[c] != 0)
    {
        d[c] = s[c];
        c++;
    }
    d[c] = 0;
    printf("After copying, the string :%s\n", d);
    return 0;
}