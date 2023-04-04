#include<stdlib.h>
#include<stdio.h>
#include <time.h>

int main(){
    char arr[70][6]={"about", "above", "abuse", "alert", "align", "alive","alone", "amaze", "angel", "ankle", "array", "azure", "build", "cause", "curse", "cycle", "daily", "diary", "earth", "email", "entry", "every", "extra", "faith", "field", "fusil", "guess", "happy", "house", "human", "image", "juice", "knock", "knife", "kitty", "limit", "lunch", "maybe", "media", "movie", "naive", "noise", "ocean", "olive", "opera", "other", "piano", "pizza", "quiet", "radio", "right", "sauce", "sharp", "slice", "solid", "space", "stone", "their", "today", "under", "unity", "union", "value", "video", "voice", "which", "wrong", "young", "youth", "zebra"};
    
    srand(time(NULL));
    int a,i,j,k=0,l=0,p=0,q=0;
    char c[5];
    
    //a=rand() % 70;
    a=34;
    printf("%s",arr[a]);
    
    printf("5글자 단어를 입력하시오:");
    scanf("%s",c);
    
    while(k<5){
        if (k != 0){
           
            if (l==5){
                printf("you're right");
                break;}
            printf("5글자 단어를 입력하시오:");
            scanf("%s",c);
        }
        i=0;
        j=0;
        p=0;
        q=0;
        l=0;
    for (i=0; i<5;i++){
        for (j=0; j<5; j++){
            if (c[j]==arr[a][i]){
                if (i==j){
                    printf("%c= green \n",c[j]);
                    l++;
                    c[j]="0";
                    break;
                }
                else{
                    printf("%c= yellow \n",c[j]);
                    c[j]="0";
                    break;
                }
            }
            else
                p++;
            if (p==5)
                printf("%c= gray \n",c[i]);
            
        }
        p=0;
    
        
        

         }
        k++;
        if (k==5)
            printf("fail");
    }

