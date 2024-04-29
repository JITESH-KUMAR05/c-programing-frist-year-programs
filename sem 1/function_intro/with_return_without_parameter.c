#include<stdio.h>

int add();
void main(){
    // int a,b;
    // printf("Enter value of a and b: ");
    // scanf("%d %d",&a,&b);
    printf("This is main function \n");
    int res = add();
    printf("%d\n",res);
    printf("Main function Ends here \n");
}
int add(){
    printf("This is Sub Function \n");
    int x=10, y=11;
    return x+y;

}