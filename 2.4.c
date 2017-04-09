#include<stdio.h>
void main(){

    int a[10][10],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if((i+j)<4){
                a[i][j]=1;
            }
            if((i+j)>4){
                a[i][j]=1;
            }
             if(i==j){
                a[i][j]=0;
            }
           if(i+j==4){
                a[i][j]=4;
           }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
