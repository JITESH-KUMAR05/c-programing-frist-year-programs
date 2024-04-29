#include<stdio.h>
int sum(int n);
void main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int result = sum(n);
    printf("%d\n",result);
    // printf("%d\n",sum);
    printf("%d",1/10);
}
int sum(int n){
    int digit,sum=0;
    int temp=n;
    while(n!=0){
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    return sum;
}