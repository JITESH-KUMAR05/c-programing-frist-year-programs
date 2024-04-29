#include<stdio.h>

void main(){
  int i,n,*ptr,sum=0;
    // int a[10] = {0,1,2,3,4};
    int a[10];
    

    for (int i = 0; i < 5; i++)
    {
      printf("enter value for array:\n");
      scanf("%d",&a[i]);
    }
    ptr = a;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;

    }
    printf("%d\n",sum);
}