 #include<stdio.h>
struct dob

    {
        int date;
        int month;
        int year;
        /* data */
    }d[20];
    

    struct student
    {
        char name[20];
        int rollno;
        int marks;
        struct dob d;
    }stud[20];

void main(){
    
    // struct student stud[20];
    int n;
    printf("Enter n value : ");
    scanf("%d",&n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter student Detail\n");
        printf("Enter name : ");
        scanf("%s",stud[i].name);
        printf("Enter dob in formt(01 06 2006)");
        scanf("%d%d%d",&d[i].date,&d[i].month,&d[i].year);
        printf("Enter rollno : ");
        scanf("%d",&stud[i].rollno);
        printf("Enter marks : ");
        scanf("%d",&stud[i].marks);


    }
    
    for (int i = 0; i < n; i++)
    
    {
        printf("%s \n %d \n %d \n",stud[i].name,stud[i].rollno,stud[i].marks);
        printf("%d:%d:%d\n",d[i].date,d[i].month,d[i].year);
        
    }
    
    
}
