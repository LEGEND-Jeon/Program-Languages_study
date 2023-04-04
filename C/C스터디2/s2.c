
#include <stdio.h>

int main(){
    int q,a,b,m,z=0,n=0,s;
    scanf("%d",&q);
    s=q;
    while (1) {
        b=q%10;
        a=(q-b)/10;
        m=(a+b)%10;
        z=10*b+m;
        q=z;
        n++;
        if (z==s)
            break;
            
    }

    
    printf("%d",n);
}

