#include <stdio.h>
int main(){
    int i,j,a,p,q,w;
    printf("");
    scanf("%d",&a);


    for(i=0;i<a;i++){
        for (j=a-1; j>=i+1; j--)
            printf(" ");
        for (p=0; p < (i+1)*2-1; p++){
            printf("*");
        }
        printf("\n"); }
    }

