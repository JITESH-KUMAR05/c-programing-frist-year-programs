#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr , sum = 0;
    int n,i;
    printf("Enter number of elements :\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    if (ptr==NULL){
        printf("Memory is not allocated :\n");
        exit(0);
    }

    else{
        printf("memory allocated successfully using malloc() :\n");
    }

    for(int i =0 ; i<n ; i++){
        printf("Enter %d value :\t",i+1);
        scanf("%d",ptr+i);
    }    

    for(int i =0 ; i<n ; i++){
        printf("%d\t",ptr[i]);
        printf("%p\n",ptr+i);
    }   
    printf("\n");
}