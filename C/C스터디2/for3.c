
#include <stdio.h>


//별문제
int main(){
    int i,j,a;
    printf("input number:");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for (j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

