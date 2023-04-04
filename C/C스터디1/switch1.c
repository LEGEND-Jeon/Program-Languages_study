#include<stdio.h>

int main(){
    int a;
    printf("달을 입력하세요:");
    scanf("%d",&a);
    switch(a) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31일까지 있습니다 /n");
        break;
    case 2:
        printf("28일까지 있습니다");
        break;
        case 4: case 6: case 9: case 11:
            printf("30일까지 있습니다 /n");
            break;
            return 0;
            
    }
}
