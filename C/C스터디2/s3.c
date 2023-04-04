#include<stdio.h>

int main(){
    int n=0,t,b,T=0;
    char z;
    scanf("%d",&n);
    scanf("%d",&b);
    while(T<210){
        scanf("%d%c",&t,&z);
        if (z=='T'){
            T+=t;
            if (T>210)
                break;
            else
                n++;
        }
        
        else
            T+=t;
        
        b--;
        if (n==9)
            n=1;
        if (b==0)
            break;
    }
    printf("%d",n);
    return 0;
}

