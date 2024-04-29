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
        temp = a[i];
        j = i-1;
        while(temp<a[j]&& j>=0){
            a[j+1]=a[j];
            --j;

        }
        a[j+1] = temp;
        
    }

    printf("\n After Sorting \n");
    for(i = 0 ; i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    
}