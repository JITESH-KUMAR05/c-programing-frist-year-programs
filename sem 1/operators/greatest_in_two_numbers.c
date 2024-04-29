// for finding the greater value among the two numbers
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("%d is grater than %d \n",a,b);

    }
    else{
        printf("%d is greater than %d \n ",b,a);
    }
}