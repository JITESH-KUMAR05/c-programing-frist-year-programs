// write a c program to find the size of normal pointer and double pointer

#include<stdio.h>

void main(){
    int var = 78;
    int *ptr2;
    int **ptr1;

    ptr2 =&var;
    ptr1=&ptr2;
    printf("Value of var = %d\n",var);
    printf("Value of var using single pointer = %d\n",*ptr2);
    printf("Value of var using double pointer = %d\n",**ptr1);

    printf("Address of var using single pointer = %p\n",ptr2);
    printf("Address of var using double pointer = %p\n",ptr1);

    printf("Size of normal pointer: %ld\n",sizeof(ptr2));
    printf("Size of double pointer: %ld\n",sizeof(ptr1));


}