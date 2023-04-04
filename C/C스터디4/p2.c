
#include<stdio.h>
int num(int n){
    if (n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return num(n-1)+num(n-2);
}

int main(){
    int n;
    scanf("%d",&n);
    num(n);
    for (int i=0;i<n;i++)
    printf("%d",num(i));
}

