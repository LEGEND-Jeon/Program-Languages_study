#include <stdio.h>
//while문 실습1
int main(){
    int i,a;
    printf("input number:");
    scanf("%d",&a);
    for(i=a; i>0; i--){
        printf("%d\n",i);
    }
    if (i==0)
        printf("%d",i);
}

