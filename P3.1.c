/*C program to create, initialize, assign and access a pointer variable.*/
#include<stdio.h>
void main(){

    int x;
    int *ptr;                   ///Creating a pointer
    ptr = NULL;                 ///Initializing the pointer
    scanf("%d",&x);
    ptr = &x;                   ///Assigning the pointer
    printf("\n%d\n",*ptr);      ///Accessing the pointer

}
