/*C program to swap two numbers using pointers.*/
#include<stdio.h>
void main(){

    int x,y;
    int *Px,*Py,temp;
    scanf("%d%d",&x,&y);
    Px=&x;  Py=&y;
    ///Swapping
        temp=Px;
        Px=Py;
        Py=temp;
        printf("\n%d\t%d\n",*Px,*Py);

}
