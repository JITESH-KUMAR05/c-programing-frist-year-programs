// reading the values into the matrix using two dimensional array
#include<stdio.h>

void main(){
    int a[5][5],n;
    printf("Enter n value");
    scanf("%d",&n);
    for(int i=0 ; i<n;i++){
        for (int j = 0; j<n; j++)
        {
            printf("Enter a number in the array");
            scanf("%d",&a[i][j]);

        }
        printf("\n");

        
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            // printf("matrix is \n");
            printf("%d",a[i][j]);
        }

        printf("\n");
    }
}