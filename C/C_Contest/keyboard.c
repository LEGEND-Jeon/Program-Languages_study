#include<stdio.h>
#include<string.h>

int main(){
  char str[100];
  scanf("%[^\n]s",str);
  for(int i=0;i<strlen(str);i++){
    if((64<str[i] && str[i]<91) || (96<str[i] && str[i]<123)  || str[i]==' '){}
    else{
        for(int j=i;j<strlen(str);j++)
         str[j]=str[j+1];
         i--;
        }
  }
  for(int i=0;i<strlen(str);i++){
    printf("%c",str[i]);
  }
}

