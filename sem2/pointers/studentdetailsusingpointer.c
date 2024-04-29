#include<stdio.h>

void main(){
    struct student
    {
        int id;
        char fname[20];
        char lname[20];
        int marks;

    }stud;

    struct student *p;

    p = &stud;
    printf("Enter id : \n");
    scanf("%d",&p->id);
    printf("Enter first name : \n");
    scanf("%s",p->fname);
    printf("Enter last name : \n");
    scanf("%s",p->lname);
    printf("Enter marks : \n");
    scanf("%d",&p->marks);

    printf("the values are :\n");

    printf("id :%d\n",p->id);
    printf("first name :%s\n",p->fname);
    printf("last name :%s\n",p->lname);
    printf("marks :%d\n",p->marks);

    
}