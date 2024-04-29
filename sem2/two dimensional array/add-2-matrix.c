// reading the values into two matrix using two dimensional array and add the 2 matrix
#include<stdio.h>

void main(){
    int a[5][5],n,m,arr[5][5];
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

    printf("Enter m value");
    scanf("%d",&m);
    for(int i=0 ; i<m;i++){
        for (int j = 0; j<m; j++)
        {
            printf("Enter a number in the array");
            scanf("%d",&arr[i][j]);

        }
        printf("\n");

        
    }


    if (m==n)
    {
        for(int i=0; i<n;i++){
            for(int j=0;j<n;j++){
            // printf("matrix is \n");
            printf("%d",a[i][j]+arr[i][j]);
        }

        printf("\n");
    }
    
    }
    else{
        printf("Addition not possible");
    }
    
}