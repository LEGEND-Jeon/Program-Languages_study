#include<stdlib.h>
#include<stdio.h>
#include <time.h>
int a=1;
int n;
int num(int n){
    if (n != 0){
        a=a*n;
        return num(n-1);}
    else
        return a;}


int main(){
    printf("INPUT NUMBER:");
    scanf("%d",&n);
    int result=num(n);
    printf("%d",result);
}

