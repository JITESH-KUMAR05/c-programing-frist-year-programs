// 0 1 1 2 3 5 8 13
#include<stdio.h>
void main(){
    int n,n1=0,n2=1,n3=1 ;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\t",n1);
    printf("%d\t",n2);
    printf("%d\t",n3);
    // for(int i=0;i<=n;i++){

        

    //     n1=n2;
    //     n2=n3;
    //     n3=n1+n2;
    //     printf("%d\t",n3);

    // }
    int i=0;
    while(i<n-3){
        n1=n2;
        n2=n3;
        n3=n1+n2;
        printf("%d\t",n3);
        i+=1;
    }
}