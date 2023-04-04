#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _friend{
    char* name;
    char* message;
    int status;
    }friend;
    
friend* list[100];
int list_num;

void init();
int addfriend();
void deletefriend();
void viewfriend();
void viewall();

int main(){
    friend *frd;
    list_num=0;
    int menu=0;
    init();
    while(1){
        printf("\n");
        printf("========friend menu=======");
        printf("\n");
        printf("1.add friend \n");
        printf("2.delete friend \n");
        printf("3.view friend \n");
        printf("4.view all friends \n");
        printf("5.exit \n");
        printf("choose:");
        scanf("%d",&menu);
        
        
        if(menu==1)
        addfriend();
        if(menu==2)
        deletefriend();
      if(menu==3)
        viewfriend();
        if(menu==4)
        viewall();
        if(menu==5){
        exit(0);
        break;}
        
    }

}

void init(){
	setvbuf(stdin, 0, 2, 0);
	setvbuf(stdout, 0, 2, 0);
	setvbuf(stderr, 0, 2, 0);
}


int addfriend(){
    int size=0;
    int status;
    friend *frd=0;
    frd=(friend *)malloc(sizeof(friend));
    
    printf("name size:");
    scanf("%d", &size);
    frd->name = (char *)malloc(size);
    printf("name:");
    read(0, frd->name, size);
    
    printf("message size:");
    scanf("%d", &size);
    frd->message = (char*)malloc(size);
    printf("message: ");
    read(0, frd->message, size);
    
    printf("status put 0(:offline) or 1(:away) or 2(:online):");
    scanf("%d", &status);
    
    list[list_num++] = frd;
}
void deletefriend(){
    int del;
    printf("Choose number who to delete:");
    scanf("%d",&del);
    for(int i=del; i<list_num; i++)
        list[i]=list[i+1];
}
void viewfriend(){
    int view;
    printf("Enter index you want to view:");
    scanf("%d",&view);
    printf("my friend! \n");
    printf("name: %s", list[view]->name);
    printf("message: %s", list[view]->message);
    printf("status: %s", list[view]->status);
}
void viewall(){
    printf("my friend! \n");
    for (int i=0; i<list_num;i++){
    printf("name: %s", list[i]->name);
    printf("message: %s", list[i]->message);
    printf("status: %s", list[i]->status); }
    printf("\n");
}

