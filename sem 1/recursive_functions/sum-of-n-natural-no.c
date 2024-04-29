#include<stdio.h>
int no(int);
void main(){
    int n,i=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int result= no(n);
    printf("%d\n",result);

}
int no(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+no(n-1);
    }
}