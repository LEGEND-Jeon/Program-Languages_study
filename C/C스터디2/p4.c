#include <stdio.h>


int main(){
    int a=1,b=1;
    do{
    do{
        printf("%d * %d = %d \n", a,b,a*b);
        b+=1;
    } while (b<10);

        printf("%d * %d = %d \n", a,b,a*b);
        a+=1;
        b=0;
    } while (a<10);
}

