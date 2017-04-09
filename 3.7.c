/*C program to read and print student details using structure pointer, demonstrate example of structure with pointer.*/
#include<stdio.h>
struct student{

    char name[30];
    int roll;
    float perc;

};
void main(){

    struct student stdt;
    struct student *ptr;
    ptr=&stdt;
    printf("Enter Details\n");
    printf("Name : ");
    gets(ptr->name);
    printf("Roll No. : ");
    scanf("%d",&ptr->roll);
    printf("Percentage : ");
    scanf("%f",&ptr->perc);

    printf("Details \n");
    printf("Name : %s\nRoll No. : %d\nPercentage : %f",ptr->name,ptr->roll,ptr->perc);

}
