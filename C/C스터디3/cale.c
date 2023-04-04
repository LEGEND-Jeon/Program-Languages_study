#include<stdio.h>

int calc(int a, char symbol, int b){
    int tmp;
    if (symbol=='-')
        tmp=a-b;
    else if (symbol=='+')
        tmp=a+b;
    else if(symbol=='*')
        tmp=a*b;
    else if (symbol=='/')
        tmp=a/b;
    return tmp;
}
int main()
{
    int a,b,result;
    char symbol;
    scanf("%d %c %d",&a,&symbol,&b);
    result=calc(a,symbol,b);
    printf("%d",result);
        
}

