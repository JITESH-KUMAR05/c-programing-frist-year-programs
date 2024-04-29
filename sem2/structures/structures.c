// initialising structures

#include<stdio.h>

void main(){

    struct student

    {
        char name[20];
        int roll;
        float totalMarks;

        /* data */
    };

    struct student s1 = {"kamal",1,12};
    struct student s2 = {"JK",2,15};

    printf("Name:%s \n ROll no: %d \n total marks: %f\n",s1.name,s1.roll,s1.totalMarks);
    printf("Name:%s \n ROll no: %d \n total marks: %f\n",s2.name,s2.roll,s2.totalMarks);

}