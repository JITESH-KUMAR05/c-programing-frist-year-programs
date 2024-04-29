#include<stdio.h>

void main(){
    int a,b,*p1,*p2;
    printf("Enter value for a and b :");
    scanf("%d%d",&a,&b);
    p1 = &a;
    p2 = &b;
    int p3 ;
    p3 = *p1 + *p2;
    printf("sum is %d ", p3);


}