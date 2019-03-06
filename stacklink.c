#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void pop(struct node *);
void push(struct node *);
void display(struct node *);
void main(){
    int option;
    
    printf("Enter 1 for push");
    printf("\n Enter 2 for pop");
    printf("\n enter 3 for display");
    printf("\n Enter 4 for exit");
    
    do{
        printf("\n Enter the option");
        scanf("%d",&option);
        switch(option){
            case 1: 
                    push(top);
                    break;
            case 2: pop(top);     
                    break;
            case 3: display(top);
                    break;
        }
    }while(option!=4);
}

void push(struct node *top){
    int val;
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter value");
    scanf("%d",&val);
	new_node->data=val;
	if(top==NULL){
		new_node->next=NULL;
        top=new_node;
	}
	else{
		new_node->next=top;
		top=new_node;
	}
}
void pop(struct node *top){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr=top;
    if(top==NULL){
        printf("underflow");
    }
    else{
    top=top->next;
    printf("%d",ptr->data);
    free(ptr);
    }
}
void display(struct node *top){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr=top;
    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}