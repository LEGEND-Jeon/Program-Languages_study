#define SQUARE(X) X*X

int main(){
  int num=SQUARE(3+2);  //3+2*3.2->잘못된 입력
  printf("%d ",num);

  return 0;
}

