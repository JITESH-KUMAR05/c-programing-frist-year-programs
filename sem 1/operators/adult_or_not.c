// voting system
#include<stdio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18 & age<101){
        printf("You are an adult you can vote and you should vote \n");

    }
    else if (age>13 & age<=18){
        printf("You are an teenager you will get a chance to vote soon \n");
        
    }
    else if (age>0 & age<=13){
        printf("You are a Kid you can't vote enjoy your childhood \n");
        
    }
    else{
        printf("Invalid age run again.....");
    }
}