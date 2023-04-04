#include<stdio.h>

//실습과제3
int main(){
    int A,B,C;
    printf("숫자 세개를 입력하세요:");
    scanf("%d %d %d",&A, &B,&C);
    if (A>=B){
        if (B>C)
            printf("%d",B);
        else if (B<C){
            if (A>C)
            printf("%d",C);
            else
                printf("%d",A);}
    }
    else if(A<=B){
        if (A>C)
            printf("%d",A);
        else if (A<C){
            if (B<=C)
            printf("%d",B);
            else
                printf("%d",C);
        }}}
