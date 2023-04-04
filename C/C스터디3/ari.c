#include<stdlib.h>
#include<stdio.h>
#include <time.h>

//아리
int main(){
    int a,x,y,k,l,p,c=0,v=0;
    srand(time(NULL));
    printf("x축의 크기 (2-9)? ");
    scanf("%d",&x);
    printf("y축의 크기 (2-9)? ");
    scanf("%d",&y);
    int arr[50][50];
    for (int i=0; i<x; i++){
        for(int j=0; j<y;j++){
            arr[i][j]=rand()%2;
        }
    }
    for (int i=0; i<x; i++){
        printf("\n");
            for(int j=0; j<y;j++){
            printf("%d ",arr[i][j]);}}
    while(1) {
        printf("\n xy좌표(두자리 수)는? (종료를 원하면 0을 넣으세요.)");
        scanf("%d", &a);
        if (a==0)
        break;
        c=a/10-1;
        v=y-(a%10);
        
    if (arr[v][c]==0)
        arr[v][c]=1;
    else
        arr[v][c]=0;
    
    if (arr[v][c+1]==0)
        arr[v][c+1]=1;
    else
        arr[v][c+1]=0;
    
    if (arr[v][c-1]==0)
        arr[v][c-1]=1;
    else
        arr[v][c-1]=0;
    
    if (arr[v+1][c]==0)
        arr[v+1][c]=1;
    else
        arr[v+1][c]=0;
    
    if (arr[v-1][c]==0)
        arr[v-1][c]=1;
    else
        arr[v-1][c]=0;
      
    for (int i=0; i<x; i++){
        printf("\n");
            for(int j=0; j<y;j++){
                printf("%d ",arr[i][j]);
                if(arr[i][j]==0)
                    p++;
            }
    }
    if (p==x*y){
        printf("축하합니다");
        break;}
    p=0;

    
}
    
}

