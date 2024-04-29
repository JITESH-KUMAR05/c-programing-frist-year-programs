#include<stdio.h>
int no(int);
void main(){
    int n,i=1,res;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        res=no(i);
        printf("%d\t",res);
        
    }
    printf("\n");
}
int no(int i){
    if(i==0){
        return 0;
    }
    else if(i==1){
        return 1;
    }
    else{
        return no(i-1)+no(i-2);
    }
}