// ternary operator
#include<stdio.h>
void main()
{
int a,b;
printf("Enter value for a and b: ");
scanf("%d%d",&a,&b);
(a<b)?printf("a is small "):printf("b is small ");
(a<b)?printf("%d",b-a):printf("%d",a-b);
}
