// positive and negative value check
#include<stdio.h>
void main(){
    int a;
    printf("Enter the value for a: ");
    scanf("%d",&a);
    if (a>0){
        printf("a is a positive number \n");
    }
    else if (a<0){
        printf("a is a negative number \n");
    }
    else{
        printf("a is equal to 0 \n");
    }
}