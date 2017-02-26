/*C program to change the value of constant integer using pointers.*/
#include<stdio.h>
void main(){

    const int x=0;
    int *Px;
    Px=&x;
    *Px=10;
    printf("%d",x);

}
