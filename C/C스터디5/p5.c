#include <stdio.h>
#include<string.h>
int main() {
  int num=0;
  char sen[50];
  scanf("%[^\n]s",&sen);
  for(int i=0; i<strlen(sen);i++){
    if(sen[i]==' ')
    num++;
    else if(sen[i]=='e'){
        if(sen[i+1]=='n'){
          if(sen[i+2]=='d'){
            break;
        }
      }
    }
  }
printf("%d",num);
}

