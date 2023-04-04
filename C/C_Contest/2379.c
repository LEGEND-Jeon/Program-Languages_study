#include<stdio.h>
int n;
int a;
int num(int n){
    if(n<=4){
        print
        a=change(n);
        printf("%d", a);}
    else {
        num(n/4);
        a=change(n%4);
        printf("%d",a); } }

int change(int n){
  if(n==1)
    return 2;
  if(n==2)
    return 3;
  if(n==3)
    return 7;
  if(n==4 || n==0)
    return 9;
}



int main(){
    printf("INPUT NUMBER:");
    scanf("%d",&n);
    num(n);
} 

