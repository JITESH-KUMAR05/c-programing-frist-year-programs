#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a charater: ");
    scanf("%c",&ch);
    if (((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z'))){
        printf("%c is alpha \n",ch);

    }
    else if ((ch>='0')&&(ch<='9')){
        printf("ch is num\n ");
    }
    else{
        printf("char is special symbol\n");
    }
}