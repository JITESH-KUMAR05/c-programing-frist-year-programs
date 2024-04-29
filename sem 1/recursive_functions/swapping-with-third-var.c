#include<stdio.h>
void swap(int*,int*);
void main(){
    int a,b;
    printf("Enter value for a and b:");
    scanf("%d%d",&a,&b);
    printf("Main function values a: %d , b:%d\n",a,b);
    swap(&a,&b);
    printf("Main function values a: %d , b:%d\n",a,b);


}
void swap(int *x,int *y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
    printf("function values a:%d,b:%d\n",*x,*y);
}