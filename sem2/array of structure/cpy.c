#include<stdio.h>
#include<string.h>

void main(){
    struct emp
    {
        char name[20];
        int id;
        int workinghr;

        /* data */
    }e1,e2,e3;
    int n;

    printf("Enter no of employee");
    scanf("%d",&n);

        printf("Enter student details\n");
        printf("Enter name: ");
        scanf("%s",e1.name);
        printf("Enter emp id : ");
        scanf("%d",&e1.id);
        printf("Enter working hours");
        scanf("%d",&e1.workinghr);
        printf("\n");
        // printf("Enter name: ");
        // scanf("%s",e2.name);
        // printf("Enter emp id : ");
        // scanf("%d",&e2.id);
        // printf("Enter working hours");
        // scanf("%d",&e2.workinghr);

        printf("employee 1\n");

        printf("Name %s \n ID : %d \n WOrking hours : %d\n",e1.name,e1.id,e1.workinghr);

        strcpy(e2.name,e1.name);
        e2.id = e1.id;
        e2.workinghr = e1.workinghr;

         printf("employee 2\n");

        printf("Name %s \n ID : %d \n WOrking hours : %d\n",e2.name,e2.id,e2.workinghr);

        e3 = e2;

         printf("employee 3\n");

        printf("Name %s \n ID : %d \n WOrking hours : %d\n",e3.name,e3.id,e3.workinghr);





    
}