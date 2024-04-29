#include<stdio.h>
void pal(int);
void main(){
    int n,temp;
    printf("Enter a number:\n");
    scanf("%d",&n);
    temp = n;
    pal(n);
}
void pal(int n){
    int reminder,sum=0, temp=n;
    while(n!=0){
        reminder=n%10;
        sum=sum*10+reminder;
        n/=10;

    }
    if (sum==temp){
        printf("%d is palindrome\n",temp);
    }
    else{
        printf("%d is not palindrome\n",temp);
    }
}