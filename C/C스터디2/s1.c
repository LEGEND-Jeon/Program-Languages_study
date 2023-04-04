include<stdio.h>
//실습과제1_수정
int main(){
    int a,b,c,i,sum=0,sumt=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<a-1;i++){
        scanf("%d",&c);
        if(b<c){
            sum+=(c-b);

            if(sumt<=sum)
                sumt=sum;
            
                
            
            b=c;
           
        }
        else if (b==c)
            sum=0;
        else{
            sum=0;
            b=c;
            
        }}
    
        
        
        printf("%d",sumt);
    

    return 0;
}

