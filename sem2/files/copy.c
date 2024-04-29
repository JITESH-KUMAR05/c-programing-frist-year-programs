#include<stdio.h>

int main(){
    char str[100];
    FILE *fp1 , *fp2;
    fp1 = fopen("input.txt","r");
    fp2 = fopen("output.txt","a");
    if(fp1 == NULL || fp2 == NULL){
        printf("Error : file not found \n");
        return 1;
        }
    else{
        printf("File opened successfuly\n");
    }
    while (fgets(str,100,fp1)!= NULL)
    {
        fputs(str , fp2);
        printf("%s\n",str);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
    }