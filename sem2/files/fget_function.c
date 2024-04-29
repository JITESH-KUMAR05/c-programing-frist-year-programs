#include <stdio.h>

int main()
{
    char ch;
    FILE *fp1, *fp2;
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("get.txt", "a");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error : file not found \n");
        return 1;
    }
    else
    {
        printf("File opened successfuly\n");
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
        printf("%c\n", ch);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}