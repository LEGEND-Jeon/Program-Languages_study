#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a=0;
    int b=0;
    char ch[10];
    
    scanf("%s",ch);
  

    for(int i=0; i<strlen(ch);i++){
        if(ch[i]=='(')
            a++;
        else if(ch[i]==')')
            b++;
        else
          continue;
    }

    
    if(a==b)
        printf("True \n");
    else
        printf("False \n");
}

