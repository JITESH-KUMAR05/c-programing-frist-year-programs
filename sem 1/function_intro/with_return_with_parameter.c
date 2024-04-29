#include<stdio.h>

int add(int,int);
void main(){
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("This is main function \n");
    int res = add(a,b);
    printf("%d\n",res);
    printf("Main function Ends here \n");
}
int add(int x, int y){
    printf("This is Sub Function \n");
    // int x=10, y=11;
    return x+y;

}