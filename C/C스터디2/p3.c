#include <stdio.h>
int main(){
    int i,j,a,p,q,w,l;
    printf("");
    scanf("%d",&a);



        for(l=0; l<a; l++) {
            for (q=0; q<l; q++){
                printf(" ");}
            for (w=a+(a+1); w>(l+1)*2; w--){
                printf("*");}
            printf("\n");
          }

    for(i=1;i<l;i++){
        for (j=a-1; j>=i+1; j--)
            printf(" ");
        for (p=0; p < (i+1)*2-1; p++){
            printf("*");
        }
        printf("\n"); }
    }

