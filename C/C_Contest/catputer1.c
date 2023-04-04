#include<stdio.h>
#include<string.h>

int main(){
  char str[100];
  int num;
  int a=0,b=0;
  while(1){
  scanf(" %s",str);
  if(strcmp(str,"RURI")==0){
    a++;
    scanf("%d",&num);
  }
  else if (strcmp(str,"MIRU")==0)
    b++;
  else if(strcmp(str,"END")==0)
    break;
  }
  
  if(a>b){
    printf("TRUE");
  }
  else{
    printf("FALSE");
  }
}

