#include<stdio.h>
// stack is a liner data structure which follows last in first out
int main(){
    char ch;
    FILE *fp1 ;
    fp1 = fopen("input.txt","r");
    if(fp1 == NULL ){
        printf("Error : file not found \n");
        return 1;
    }
    else{
        printf("File opened successfuly\n");
    }
    fclose(fp1);
    return 0;
}