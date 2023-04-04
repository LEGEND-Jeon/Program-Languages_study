#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>

int main(){
char str[31];
int count=0;
int n=0;
int i;
int num=0;
scanf("%s", &str);
for(i=0;i<str[i];i++){
    n++;
    if(str[i]=='1'){
        count++;
    }
}
for(int i=0; i<n; i++){
    if(str[i]=='1'){
        num=num+pow(2,n-i-1);
    }
    else{
        continue;
    }
}
if(count%2!=0){
    num=num*2+1;
}
printf("0x%X",num);
}

