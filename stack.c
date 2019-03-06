#include<stdio.h>
#include<stdlib.h>
int a[5];
int top=-1;
void push(int a[],int v);
int pop(int a[]);
void display(int a[]);
void main()
{
    int option;
    int val;
    printf("Enter 1 for push");
    printf("\n Enter 2 for pop");
    printf("\n enter 3 for display");
    printf("\n Enter 4 for exit");
    
    do{
        printf("\n Enter the option");
        scanf("%d",&option);
        switch(option){
            case 1: 
                    push(a,val);
                    break;
            case 2: val= pop(a);
                    printf("%d",val);
                    break;
            case 3: display(a);
                    break;
        }
    }while(option!=4);
}
void push(int a[],int v)
{
    if(top==4){
        printf("overflow");
    }
    else{
        printf("enter value");
        scanf("%d",&v);
        top++;
        a[top]=v;
    }
}
int pop(int a[]){
    if(top==-1)
    {
        printf("underflow");
    }
    else{
        return a[top];
        top--;
    }
}
void display(int a[])
{
    int i ;
    for(i=top;i<4;i++){
        printf("%d",a[i]);
    }
}