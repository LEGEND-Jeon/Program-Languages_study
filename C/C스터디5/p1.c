#include <stdio.h>
#include <string.h>
int tmp;
int brr[10];
int crr[10];
void sort(int *arr){
    for(int i=0; i < 8; i++){
        for(int j=0; j < 7; j++){
            if(arr[j]<arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    } } //버블정렬로 만들고

   


int main(){
    int arr[8];
    int crr[8];
    int brr[8];
    int drr[8];
    int sum=0;
    
    for(int i=0; i<8; i++)
        scanf("%d",&arr[i]);
    
    for (int i=0; i< 8; i++){
        brr[i]=arr[i];
    } //원래 arr brr에 복붙
    
    sort(arr);
    
    for(int i=0; i<5; i++){
        sum=sum+arr[i];

  }
    
    printf("%d \n",sum);
    
    for(int i=0;i<5; i++){
        for(int j=0; j<8; j++){
            if(arr[i]==brr[j])
                crr[i]=j+1;
        }
    } //기존 arr에서 순서 찾고
    
    for(int i=0; i<5; i++){
        drr[i]=crr[i];
    }
for(int i=0; i < 5; i++){
        for(int j=0; j < 4; j++){
            if(drr[j]>drr[j+1]){
                tmp=drr[j];
                drr[j]=drr[j+1];
                drr[j+1]=tmp;
            }
        }
    }
for(int i=0; i<5; i++){
        printf("%d ",drr[i]);
    }
   
}

