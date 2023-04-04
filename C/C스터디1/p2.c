#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("첫번째 바구니 딸기 수 입력:");
    scanf("%d",&a);
    printf("첫번째 바구니 키위 수 입력:");
    scanf("%d",&b);
    printf("두번째 바구니 딸기 수 입력:");
    scanf("%d",&c);
    printf("두번째 바구니 키위 수 입력:");
    scanf("%d",&d);
    if (a<c)
        printf("%d",a+d);
    else if (a>c)
        printf("%d",c+b);
    else
        if (b>d)
            printf("%d", a+d);
        else if (b<d)
            printf("%d",a+b);
        else
            printf("%d",a+b);
    return 0;

        
}
