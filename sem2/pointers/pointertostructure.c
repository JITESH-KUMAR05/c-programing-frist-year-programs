#include<stdio.h>

void main(){
    struct student
    {
        char name[20];
        int age;

    }stud;

    struct student *p;

    p = &stud;
    printf("Enter name : \n");
    scanf("%s",p->name);
    printf("Enter age : \n");
    scanf("%d",&p->age);

    printf("the values are :\n");

    printf("%s\n",p->name);
    printf("%d\n",p->age);

    
}