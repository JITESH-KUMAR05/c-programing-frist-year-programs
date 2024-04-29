#include<stdio.h>

void main(){
    int a[5] = {1,2,3,4,5};
    int i , *p;
    p = &a[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(p+i));
        printf("%p\n",(p+i));
    }
}