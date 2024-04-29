#include<stdio.h>

void main(){

    struct emp

    {
        char name[20];
        int id;
        float salary;

        /* data */
    };

    struct emp e1 = {"kamal",1,12};
    struct emp e2 = {"JK",2,15};

    printf("Name:%s \n id no: %d \n total marks: %f\n",e1.name,e1.id,e1.salary);
    printf("Name:%s \n id no: %d \n total marks: %f\n",e2.name,e2.id,e2.salary);

}