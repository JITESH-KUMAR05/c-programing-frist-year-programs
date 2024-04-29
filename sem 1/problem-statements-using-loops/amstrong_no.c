#include<stdio.h>

void main(){
int n,digit,sum=0;
printf("Enter a number:\n");
scanf("%d",&n);
int temp=n;
while(n!=0){
digit=n%10;
sum+=(digit*digit*digit);
n/=10;
}
printf("%d\n",sum);
if(sum==temp){
printf("%d is a amstrong number\n",temp);

}
else{
    printf("Not an amstrong number\n");
}
}
