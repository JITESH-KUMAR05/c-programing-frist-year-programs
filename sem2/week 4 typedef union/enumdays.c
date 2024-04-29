#include<stdio.h>

enum days {sun , mon , tue=5 , wed , thr , fri , sat};

int main(){
    enum days today;
    today = thr;
    printf("%d\n",today);
    return 0 ;


}