#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float root1,root2,img;
    printf("Enter value for a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    img = sqrt((b*b)-(4*a*c));
    if (img>0){
        printf("Two real and distinct roots \n");
        root1=(((-b)+img)/(2*a));
        root2=(((-b)-img)/(2*a));
        printf("root1:%f , root2:%f\n",root1,root2);

    }
    else if (img==0){
        printf("Real and equal roots\n ");
        root1=(((-b)+img)/(2*a));
        root2=(((-b)+img)/(2*a));
        printf("root1:%f , root2:%f\n",root1,root2);
    }
    else {
        printf("Imaginery roots \n");

    }
//     else{
//         printf("Invalid input ");
//     }
 }