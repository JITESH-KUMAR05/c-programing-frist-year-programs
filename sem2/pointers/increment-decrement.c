#include<stdio.h>

void main(){
    int a,*p1,*p2,*p3;
    p1 = &a;
    printf("Enter value for a :");
    scanf("%d",&a);
    printf("%d\n",*p1);
    p2 = p1++;
    printf("%d\n",*p2);
    p3 = ++p1;
    printf("%d\n",*p3);

}