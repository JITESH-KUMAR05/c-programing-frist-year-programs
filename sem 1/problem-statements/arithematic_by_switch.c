#include<stdio.h>
void main()
{
    int a,b,op;
    printf("Enter the value for a and b :");
    scanf("%d%d",&a,&b);
    printf("Enter value for op :");
    scanf("%d",&op);

    switch(op){

        case 1:
            printf("Add: %d \n",a+b);
            break;
        case 2:
            printf("Sub: %d \n",a-b);
            break;

        case 3:
            printf("Mul: %d \n",a*b);
            break;

        case 4:
            printf("Div: %d \n",a/b);
            break;

        case 5:
            printf("Mod: %d \n",a%b);
            break;

        default:
            printf("Wrong option");
            break;

    }
}
