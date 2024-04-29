/*
   *
  **
 ***
****

*/

#include<stdio.h>
void main(){
    int row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    // for(int i=1;i<=row;i++){
    //     for(int k=row-1;k>=2*i-i;k--)
    //     {
    //         printf(" ");
            
    //     }
    //     for(int j=1;j<=2*i-i;j++){
    //         printf("*");
    //      }
        
    //     printf("\n");

    // }
    for (int i=1;i<=row;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf(" ");
        }
        for(int k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}