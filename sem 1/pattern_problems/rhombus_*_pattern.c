// I am trying to print a rhombus
//     *    
//    ***
//   *****
//    ***
//     *

#include<stdio.h>
void main(){
    int row ; 
    printf("Enter Row");
    scanf("%d",&row);

    for(int i=1;i<=row;i++){
        for(int k=1;k<=row;k++){
            printf(" ");
        }
        for(int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}