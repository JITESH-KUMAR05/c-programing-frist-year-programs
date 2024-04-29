#include<stdio.h>

void main(){
    int a , b,c,*p,*q , *r;
    a = 5;
    b = 7;
    *p = 1;
    *q = 2;
    r = p;
    p = q;
    q = r;

}