#include<stdio.h>

void add(int,int);
void main(){
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("This is main function \n");
    add(a,b);
    printf("Main function Ends here \n");
}
void add(int x, int y){
    printf("This is Sub Function \n");
    printf("Addition is %d \n",x+y);

}