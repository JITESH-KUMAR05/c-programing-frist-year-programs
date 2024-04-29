#include<stdio.h>
#include<string.h>

int main(){
    enum color {Red, Green , Blue};
    enum color fav_color;

    printf("please choose your fav color : , 0.red , 1.green , 2.blue");
    scanf("%u",&fav_color);

    switch (fav_color)
    {
    case Red:
        printf("Your fav color is Red\n");
        break;
    
    case Green:
        printf("Your fav color is Green\n");
        break;
    
    case Blue:
        printf("Your fav color is Blue\n");
        break;
    
    default:
        printf("Wrong choice\n");
        break;
    }
}