/*Program to read array elements and print with addresses.*/
#include<stdio.h>
void main(){

    int arr[10],*ptr,i;
    ptr=&arr[0];
    for(i=0;i<10;i++){
        scanf("%d",ptr+i);
    }
    printf("Address\t\tValue\n");
    for(i=0;i<10;i++){
        printf("%d\t\t%d\n",(ptr+i),*(ptr+i));
    }
}
