#include<stdio.h>
#include<string.h>

void main(){
    struct performance
    {
        int workinghr;
        int sales;
        int profit;

    }p[20];
    
    struct emp
    {
        char name[20];
        int id;
        struct performance p;
        
    }e[20];
    int n;
    printf("Enter no of employee");
    scanf("%d",&n);
    for(int i = 0 ; i<n ; i++){
        printf("Enter student details\n");
        printf("Enter name: ");
        scanf("%s",e[i].name);
        printf("Enter emp id : ");
        scanf("%d",&e[i].id);
        printf("Enter working hours");
        scanf("%d",&p[i].workinghr);
        printf("Enter sales : ");
        scanf("%d",&p[i].sales);
        printf("enter profi9 : ");
        scanf("%d",&p[i].profit);
        printf("\n");
    }
    for (int i = 0; i < n; i++)

    {
        printf("NAme : %s \n ID: %d \n sales : %d \n Working hour : %d \n Profit : %d \n" ,e[i].name,e[i].id,p[i].sales,p[i].workinghr , p[i].profit );
    }
}