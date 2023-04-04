#include<stdio.h>

int main(){
        FILE* fp = fopen("test.txt","r");
        char buffer[5]={0,};

        fread(buffer,1,5,fp);
        printf("%s",buffer);

        fclose(fp);
}

