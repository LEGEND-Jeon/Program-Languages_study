#include <stdio.h>
int main(){
int num=1;

if(num==1)
   goto ONE;
else
   goto EXIT;  //변수값에 따라 해당 레이블로 이동

ONE:
   printf("레이블one");
   goto EXIT;
EXIT:
   return 0;    //해당 레이블에 가서 실행
                   //->case문과 비슷하다고 느껴졌다.
}

