#include<stdio.h>

void main(){
    char str[6] = "Hello";
    char *p = str;
    while (*p != '\0')
    {
        printf("%c",*p);
        p++;
    }
    printf("\n");
    
}
