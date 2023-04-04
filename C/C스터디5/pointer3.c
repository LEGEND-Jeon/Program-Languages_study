#include <stdio.h>
#include <string.h>
int tmp;
void sort(int *arr){
    for(int i=0; i < 10; i++){
        for(int j=0; j < 10-i; j++){
            if(arr[j]<arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}

int main(){
    int arr[10];
    
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);
    
    sort(arr);
    
    for(int i=0; i<10; i++)
        printf("%d", arr[i]);
}

