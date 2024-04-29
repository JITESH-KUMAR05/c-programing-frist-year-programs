#include<stdio.h>
void main(){
    int row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=i;j<row;j++){
            printf(" ");
        }
        for(int k=0;k<(2*i-1);k++){
            printf("*");

        }for(int j=1;j<=row-i+1;j++){
            printf("*");
         }
        printf("\n");
    }
}