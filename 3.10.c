/*C program to demonstrate example of array of pointers.*/
#include<stdio.h>
void main(){

    int *ptr[10];
    int i,arr[10],sum=0;
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        ptr[i]=&arr[i];
    }
    for(i=0;i<10;i++){
        printf("%d ",*ptr[i]);
    }
}
