#include<stdio.h>

void main(){
    int n,count,sum=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    count=1;
    while(count<=n){
        sum+=count;
        count++;

    }
    printf("%d\n",sum);

}