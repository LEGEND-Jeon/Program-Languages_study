

//연습문제1
int main(){
    int a,i,sum=0,b=100000,c=0;
    for (i=0; i<7;i++){
        scanf("%d", &a);
        if (a%2==1){
            sum+=a;
            c+=1;
            if (a<b){
                b=a;}
        }
        
    }
    if (c!=0){
    printf("%d \n",sum);
    printf("%d",b);}
    
    if (c==0){
        printf("-1");
        }

}


