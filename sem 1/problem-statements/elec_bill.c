#include<stdio.h>
void main()
{
    float u,p;
    p=0;
    printf("Enter units: ");
    scanf("%f",&u);
    if (u>0 && u<=200){
        p = (u*0.5)+100;
        printf("%f\n",p);

    }
    else if (u>200 && u<=400){
        p=(u*0.65)+100;
        printf("%f\n",p);

    }
    else if (u>400 && u<=600){
        p = (u*0.80)+230;
        printf("%f\n",p);

    }
    else if (u>600){
        p = (u*1)+390;
        printf("%f\n",p);

    }
    else{
        printf("Invalid units\n");
        
    }
}