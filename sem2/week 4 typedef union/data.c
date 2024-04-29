#include<stdio.h>
#include<string.h>

union data
{
    int i ;
    float f;
    char str[20];

};

int main(){
    union data Data;
    Data.i = 10;

    printf("data.1:%d\n",Data.i);
    Data.f = 220.5;
    printf("data %f\n",Data.f);
    strcpy(Data.str , "cprograming");
    printf("Data %s\n", Data.str);
    return 0;
}