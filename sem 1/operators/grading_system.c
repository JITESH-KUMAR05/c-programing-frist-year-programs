// grading system
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);
    if (marks>=95 & marks<=100){
        printf("Congratulation you got O grade \n");
    }
    if (marks>=90 & marks<95){
        printf("Congratulation you got A+ grade \n");
    }
    if (marks>=80 & marks<90){
        printf("you can improve you got A grade \n");
    }
    if (marks>=70 & marks<80){
        printf("Need Improvement you got B+ grade \n");
    }
    if (marks>=60 & marks<70){
        printf("Try Harder you got B grade \n");
    }
    if (marks>=50 & marks<60){
        printf("Focus on studies you got C+ grade \n");
    }
    if (marks>=40 & marks<50){
        printf("Focus otherwise next time gone you got C grade \n");
    }
    if (marks>=0 & marks<40){
        printf("Work Hark, you got F grade \n");
    }
    else{
        printf("invalid marks \n ");
    }

}