#include<stdio.h>
void main(){
    int num,digit,reversed=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while(num!=0){
        digit=num%10;
        reversed=reversed*10+digit;
        num/=10;

    }
    printf("reversed of %d is %d\n",temp,reversed);

}