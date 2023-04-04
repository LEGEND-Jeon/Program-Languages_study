#include<stdio.h>

int main(){
    int a,sum;
    int arr[5] = {0,}; //배열 초기값 설정 필수
    for(int i = 0 ; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    for (int j=0;j<5;j++)
        sum+=arr[j];
        printf("AV: %d",sum/5);
    
    }

