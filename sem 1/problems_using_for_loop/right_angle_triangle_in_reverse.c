#include<stdio.h>
void main(){
    int row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for(int i=row;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");

    }
}