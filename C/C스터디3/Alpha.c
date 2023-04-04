#include<stdio.h>
#include <time.h>

//실습2
int main(){
    int sum=0;
    int arr[26]={0};
    char c[50];
    int num=0;
    int a=0;
    scanf("%s",c);
    
    for (int h=0; c[h] !='\0';h++)
    {
    if ('z'>=c[h] && c[h]>='a')
        c[h]=c[h]-32;
    }
    
   for(int i=0; i<sizeof(c);i++){
       arr[c[i]-65]++;
   }
   
   for(int i=0; i<26;i++){
       if(sum<arr[i]){
           sum=arr[i];
           a=i;
           num=0;
       }
       else if(sum==arr[i]){
           num=1;
       }
   }
   if(num==1){
       printf("?");
   }
   else{
    printf("%c",a+65);
    }

