#include <stdio.h>
#include<string.h>
//포인터 실습
int main(){
  char str[50];
  scanf("%[^\n]s",str);
  for(int i=0;i<strlen(str);i++){
    if(str[i]=='g'&& str[i+1]=='i' && str[i+2]=='r' &&str[i+3]=='l'){
            str[i]='m';
            str[i+1]='a';
            str[i+2]='n';
            for(int j=i+3; j<strlen(str);j++){
              str[j]=str[j+1];
            }
        }
      }
  for(int i=0;i<strlen(str);i++){
    printf("%c",str[i]);
  }
    }

