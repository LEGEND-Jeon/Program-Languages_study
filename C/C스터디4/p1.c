#include<stdio.h>
int n;
int num(int n){
    if(n==0 || n==1)
        printf("%d", n);
    else {
        num(n/2);
        printf("%d",n%2); } }



int main(){
    printf("INPUT NUMBER:");
    scanf("%d",&n);
    num(n);
}

