#include<stdio.h>

void main(){
    int i,j,k,n,temp,a[10];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d elements ",n);
    for ( i = 0; i < n  ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++){
        for(j=n-1;j>i;j--){
            if (a[j]<a[j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;

            }
            
        }
    }

    printf("\n After Sorting \n");
    for(i = 0 ; i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    
}