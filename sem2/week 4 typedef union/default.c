#include<stdio.h>

enum week {sun , mon , tue=5 , wed , thr , fri , sat};

int main(){
    enum week defaultv;
    defaultv = thr;
    printf("%d\n",defaultv);
    return 0 ;


}