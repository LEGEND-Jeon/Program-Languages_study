#include <stdio.h>

int main(){
    char A,B,C,q,w,e;
    printf("알페벳 세개를 입력하세요:");
    scanf("%c %c %c",&q, &w,&e);
    if (q<97)
        A=q;
    else
        A=q-32;
        
    if (w<97)
        B=w;
    else
        B=w-32;
        
    if (e<97)
        C=e;
    else
        C=e-32;
    
    if(C>=B && B>=A){
        printf("o");
    }
    else{
        printf("x");
    }
}
