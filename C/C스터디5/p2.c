#include <stdio.h>
#include <string.h>
int k=0;

int main(){
    int num;
  int a=0;
    int b=0;
    char crr[20];
    char arr[20];
    char result[20][20];
    char an[12]="are anagrams";
    char not[17]="are NOT anagrams";
    scanf("%d",&num);
    for(k=0;k<num;k++){
   a=0;
    b=0;
    scanf("%s %s", arr, crr);
    for (int i=0; i<strlen(arr); i++){
        if(arr[i]==' '){
            continue;
        }
      }


    
    for(int i=0; i<strlen(arr);i++){
      for(int j=0;j<strlen(arr);j++){
        if (arr[i]==crr[j])
            a++; 
    }
      }
 for(int i=0; i<strlen(arr);i++){
      for(int j=1;j<strlen(arr)-j;j++){
          if(arr[i]==arr[i+j])
            b+=2;
        }
  }
      
  if(strlen(arr)!=strlen(crr)){
    a=-100;
  } 

      
   

    if (a-b==strlen(arr)){
        for(int j=0;j<11;j++)
        result[k][j]=an[j];}
    else{
      for(int j=0;j<16;j++)
        result[k][j]=not[j]; }
      
  }


    
for(int i=0;i<num;i++){
  for(int j=0;j<16;j++)
  printf("%c",result[i][j]);
  printf("\n");
  }
    

  }

