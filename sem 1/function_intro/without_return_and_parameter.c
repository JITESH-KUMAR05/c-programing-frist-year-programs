#include<stdio.h>

void add();
void main(){
    printf("This is main function \n");
    add();
    printf("Main function Ends here \n");
}
void add(){
    int x=10,y=11;
    printf("This is Sub Function \n");
    printf("Addition is %d \n",x+y);

}