#include <stdio.h>


int main(){
    int i,a,sum=1;
    printf("input number:");
    scanf("%d",&a);
    for(i=1; i<=a;i++){
        sum = sum*i;
    }
    printf("%d!은 %d입니다",a,sum);
}

