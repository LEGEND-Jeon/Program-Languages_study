include <stdio.h>

void bubble(int arr[]){
    int tmp;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
        }
    }
}

int main(){
    int arr[10];
    int d;
    for(int i=0;i<3;i++)
    scanf("%d",&arr[i]);
    bubble(arr);

    
  if (arr[2]-arr[1]==arr[1]-arr[0]){
        d=arr[2]-arr[1];
        printf("%d",arr[2]+d);
    }
    else if (2*(arr[2]-arr[1])==arr[1]-arr[0]){
        d=arr[2]-arr[1];
        printf("%d",arr[0]+d);
}
else if (2*(arr[1]-arr[0])==(arr[2]-arr[1])){
    d=arr[1]-arr[0];
    printf("%d",arr[1]+d);
}
}

