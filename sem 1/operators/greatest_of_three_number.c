// for finding the greater value among the three numbers
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b & a>c){
        printf("%d is grater than %d and %d \n",a,b,c);

    }
    if (b>a & b>c)
    {
        printf("%d is greater than %d and %d \n ",b,a,c);
    }
    else{
        printf("%d is greater than %d and %d \n",c,a,b);
    }
}