#include <stdio.h>

int main(){
    char s[10];
    scanf("%s",&s);
    for (int i=0; s[i]!='\0'; i++){
        s[i]=s[i]-32;
        printf("%s ",s);
        s[i]=s[i]+32;}
}

