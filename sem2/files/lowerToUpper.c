#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    FILE *fp1, *fp2 , *fp3;
    char ch ,newch;
    fp1 = fopen("new1.txt", "r");
    if (fp1 == NULL)
    {
        puts("file does not exist \n");
        exit(1);
    }

    fp2 = fopen("upper.txt", "w+");
    if (fp2 == NULL)
    {
        puts("File does not exist");
        exit(1);
    }
    fp3 = fopen("lower.txt", "w");
    if (fp3 == NULL)
    {
        puts("File does not exist");
        exit(1);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        printf("%c\t",ch);
        fputc(ch, fp2);
        /* code */
    }
printf("\n");
    rewind(fp2);
    while((newch = fgetc(fp2)) != EOF)
    {
        //newch = tolower(newch);
        printf("%c\t",tolower(newch));
        fputc(newch,fp3);

    }
printf("\n");

    fclose(fp1);
    fclose(fp2);
}