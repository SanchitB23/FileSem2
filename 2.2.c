#include<stdio.h>
void main(){

    int n;
    printf("Enter Number of Students : ");  scanf("%d",&n);
    int rollnum[n],tot[n];
    char name[10][n];
    int i,j,sub[5];
    for(i=0;i<n;i++){
        printf("Enter Roll No. :");     scanf("%d",&rollnum[i]);
        printf("Enter Name :");     scanf("%s",&name[i]);
        tot[i]=0;
        for(j=0;j<5;j++){
            printf("Enter Marks of Sub%d :",j+1);   scanf("%d",&sub[j]);
            tot[i]+=sub[j];
        }
    }
    int maxm=0,c=0;
    for(i=0;i<n;i++){
        if(tot[i]>maxm){
            maxm=tot[i];
            c=i;
        }
    }
    printf("\nMax marks is of roll num. : %d\tname : %s\tmarks : %d",rollnum[c],name[c],tot[c]);
}
