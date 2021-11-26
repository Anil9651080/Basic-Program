#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ESC 27
#define f1 59
#define f2 60

void signup(void);
void login(void);

struct
{
    char password[20];
    char password[20];
} s;

FILE *fp;

void main()
{
    int ch;
    while (1)
    {
        clrscr();
        gotoxy(20, 5);
        printf("______________________Anil Sharma________________");
        gotoxy(28, 7);
        printf("Yours Welcome here........");
        gotoxy(28, 9);
        printf("press F1 for login");
        gotoxy(28, 11);
        printf("press F2 for Signup");
        printf(28, 13);
        printf("press ESC for Exit");
        gotoxy(20, 15);
        printf("_______________***************______________\n");
        getch();
        ch = getch();
        switch (ch)
        {
        case F1:
            clrscr();
            gotoxy(10, 14);
            for (int i = 0; i < 40; i++)
            {
                printf("_");
                delay(40);
            }
            login();
            break;
        case F2:
            clrscr();
            gotoxy(10, 14);
            for (int i = 0; i < 40; i++)
            {
                printf("_");
                delay(40);
            }
            signup();
            break;

        default:
        case ESC:
            exit(0);
            break;
        }
    }

    getch();
}

void login()
{
    int c;
    char username[20];
    char pass[20];
    char chkp;
    char chku;

    clrscr();
    gotoxy(23, 5);
    printf("_______________Login Zone ________________");
    gotoxy(23, 7);

    fp = fopen("record.bin", "rb");

    printf("Enter User Name Here      :");
    gets(username);
    gotoxy(23, 9);
    printf("Enter password          :");

    for (int i = 0; c = getch() != 13; i++)
    {
        pass[i] = c;
        printf("*");
    }
    pass[i] = "\0";

    while (!feof(fp))
    {
        chku
    }
}