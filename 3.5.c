/*C program to count vowels and consonants in a string using pointer.*/
#include<stdio.h>
void main(){

    char str[50];
    char *ptr;
    int v=0,a,c=0;
    gets(str);
    ptr=&str;
    while(*ptr!='\0'){
        if(*ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U' || *ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u')
            v++;
        else
            c++;
        ptr++;
        a++;
    }
    printf("\nVowels : %d\tConsonants : %d\n%d",v,c,a);

}
