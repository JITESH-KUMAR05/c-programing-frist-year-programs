#include<stdio.h>
void prime(int n);
void main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    prime(n);
}

void prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }

    }
    if(count==2){
        printf("%d is  a prime number \n",n);

    }
    else{
        printf("%d is not a prime number \n",n);
    }
}