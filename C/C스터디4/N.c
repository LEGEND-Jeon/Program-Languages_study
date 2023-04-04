#include <stdio.h>

int main(){
    int n,j=0;
    scanf("%d",&n);
    for (int i=0; i<n;i++){
        if(i==0){
        printf("*");
       for (int j=0;j<n-2;j++)
        printf(" ");
        printf("*");
        printf("\n");
        }
        else if(i==n-1){
        printf("*");
       for (int j=0;j<n-2;j++)
        printf(" ");
        printf("*");
        printf("\n");
        }
        else{
            printf("*");
            for (j=0;j<i-1;j++)
            printf(" ");
            printf("*");
            for (int k=1; k<n-2-j;k++)
                printf(" ");
            printf("*");
            printf(" \n");
        
        }
    }
} 

