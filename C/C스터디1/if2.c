#include <stdio.h>
int main(){
    int a;
    printf("숫자를 입력하세요:");
    scanf("%d",&a);
    if (a%3==0 && a%5==0)
        printf("3과 5의 배수입니다");
    else
        printf("3과 5의 배수가 아닙니다");
    
    return 0;
}
