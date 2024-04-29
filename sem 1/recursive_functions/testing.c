#include<stdio.h>
void no(int,int);
int sum=0;
void main(){
    int n,i=1,result=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    no(i,n);
    printf("%d",sum);
}
void no(int i , int n){
    if (i<=n){
        sum = sum+i;
        i++;
        no(i,n);
    }
}