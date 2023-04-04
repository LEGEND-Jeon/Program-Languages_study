int tmp[5];
void reverse(int *arr,int a){
    for(int i=0; i<5; i++)
        tmp[i]=arr[i];
    for(int i=0; i<5; i++){
        arr[i]=tmp[4-i];
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    
    printf("BEFORE:");
    for(int i=0; i<5; i++)
        printf("%d",arr[i]);
    
    reverse(arr,5);
    
    printf("\n AFTER:");
    for(int i=0; i<5; i++)
        printf("%d",*(arr+i));
    printf("\n");
}

