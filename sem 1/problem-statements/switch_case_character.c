#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter the value for a and b :");
    scanf("%d%d",&a,&b);
    printf("From (+,-,*,/) choose and \nEnter value for op :");
    scanf("%c",&op);

    switch(op){

        case '+':
            printf("Add: %d \n",a+b);
            break;
        case '-':
            printf("Sub: %d \n",a-b);
            break;

        case '*':
            printf("Mul: %d \n",a*b);
            break;

        case '/':
            printf("Div: %d \n",a/b);
            break;

        case '%':
            printf("Mod: %d \n",a%b);
            break;

        default:
            printf("Wrong option\n");
            break;

    }
}