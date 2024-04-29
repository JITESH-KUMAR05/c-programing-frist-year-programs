#include<stdio.h>

void main(){
    int arr[100],key,i,n;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter %d integer(s) \n",n);

    for(i=0 ; i<n ; i++){
            scanf("%d",&arr[i]);

    }
    printf("Enter a number to search\n");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if (arr[i]==key)
        {
            printf("%d is present at location %d \n" , key,i+1);
            break;
            /* code */
        }
        
    }
    if (i>=n)
    {
        printf("%d isn't present at location %d\n",key,i+1);
    }
    
}