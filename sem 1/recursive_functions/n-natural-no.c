#include<stdio.h>
void no(int , int);
void main(){
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    no(n,i);
}
void no(int n,int i){
    if(i<=n){
        printf("%d\n",i);
        i++;
        no(n,i);
    }
}