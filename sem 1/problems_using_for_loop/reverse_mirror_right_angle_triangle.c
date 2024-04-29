/*
****
***
**
*
*/

#include<stdio.h>
void main(){
    int row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i+1;j++){
            printf("*");
         }
        for(int k=1;k<i;k++)
        {
            printf(" ");
            
        }
        
        
        printf("\n");

    }
}