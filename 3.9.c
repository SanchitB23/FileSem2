#include<stdio.h>
void main(){

    int *ptr;
    int x=20;
    ptr=&x;
    printf("%d",**&ptr);

}
