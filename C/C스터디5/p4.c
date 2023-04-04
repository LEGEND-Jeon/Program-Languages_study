//실습4 강박증
#include <stdio.h>
int tmp;

int main() {
  int num=0;
  int b=0;
  int c=0;
  scanf("%d",&num);
  int arr[num];
  int brr[num/2];
  int crr[num/2];
  scanf("%d",arr);
  for(int i=1;i<num;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<num;i++){
    if(arr[i]%2==0){
      brr[b]=arr[i];
      b++;
    }
    else{
      crr[c]=arr[i];
      c++;
    }
  }
  for(int i=0; i < num/2; i++){
        for(int j=0; j < num/2-1; j++){
            if(crr[j]>crr[j+1]){
                tmp=crr[j];
                crr[j]=crr[j+1];
                crr[j+1]=tmp;
            }
        }
    }
  for(int i=0;i<num/2;i++)
printf("%d ",crr[i]);
for(int i=0; i < num/2; i++){
        for(int j=0; j < num/2-1; j++){
            if(brr[j]>brr[j+1]){
                tmp=brr[j];
                brr[j]=brr[j+1];
                brr[j+1]=tmp;
            }
        }
    }
  for(int i=0;i<num/2;i++)
    printf("%d ",brr[i]);
}

