#include<stdio.h>
int main(){
    int i,a,sum=0;
    printf("input number:");
    scanf("%d",&a);
    for(i=0; i<=a;i++){
        sum += i;
    }
    printf("%d",sum);
}

