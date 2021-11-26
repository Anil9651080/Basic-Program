// #include <stdio.h>

// // struct student

// // {
// //     int roll;
// //     int per
// // };
// // void main()
// // {
// //     struct student s;
// //     FILE *fp = fopen("abc.txt", "w");
// //     printf("Enter roll and percentage");
// //     scanf("%d%f", &s.roll, &s.per);
// //     fwrite(&s, sizeof(s), 1, fp);
// // }

#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w+");
    fputs("Walchand Solapur", fp);
    fseek(fp, 10, SEEK_SET);
    fputs("Maharashtra", fp);
    fclose(fp);
    return (0);
}
