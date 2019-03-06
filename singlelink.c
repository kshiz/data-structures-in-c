#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *next;
	int data;
};
struct node *start=NULL;
void display(struct node *head)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr=head;
	while(ptr!=NULL)
	{
		printf("\t %d",ptr->data);
		ptr=ptr->next;
	}
}
void insertstart(struct node *head)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=6;
	new_node->next=head;
	head=new_node;
}
void insertend(struct node *head)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	new_node->data=0;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	new_node->next=NULL;
}
void insertbefore(struct node *head,int val)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *preptr=(struct node *)malloc(sizeof(struct node));
	new_node->data=6;
	ptr=head;
	while(ptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=new_node;
	new_node->next=ptr;
}
void insertafter(struct node *head,int val)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *preptr=(struct node *)malloc(sizeof(struct node));
	new_node->data=6;
	ptr=head;
	preptr=ptr;
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=new_node;
	new_node->next=ptr;
}
void delstart(struct node *head)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr=head;
	head=head->next;
	free(ptr);
}
void delend(struct node *head)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *preptr=(struct node *)malloc(sizeof(struct node));
	ptr=head;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
}
void delbefore(struct node *head,int val)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *preptr=(struct node *)malloc(sizeof(struct node));
	ptr=head;
	while(ptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
}
void delafter(struct node *head,int val)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *preptr=(struct node *)malloc(sizeof(struct node));
	ptr=head;
	preptr=ptr;
	while(preptr->data!=val)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
}
void main()
{
	int option;
	int num;
	start=(struct node *)malloc(sizeof(struct node));
	struct node *new_node;
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	printf("\n enter -1 to end");
	printf("\nEnter the number");
	scanf("%d",&num);
	while(num!=-1)
	{
		if (start==NULL)
		{
			new_node =(struct node *)malloc(sizeof(struct node));
			new_node->next=NULL;
			new_node->data=num;
		}
		else
		{
			ptr=start;
			new_node=(struct node *)malloc(sizeof(struct node));
			new_node->data=num;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=new_node;
			new_node->next=NULL;
			printf(" Enter the number");
			scanf("%d",&num);
		}
	}
	printf("Enter 1 for insertion in beg");
	printf(" Enter 2 for insertion at end");
	printf("Enter 3 for insertion before node");
	printf("Enter 4 for insertion after node");
	printf("Enter 5 for Deletion at beginning");
	printf("Enter 6 for Deletion at end");
	printf("Enter 7 for Deletion before a node");
	printf("Enter for Deletion after a given node");
	scanf("%d",&option);
	switch(option)
	{
		case 1 : insertstart(start);
			 display(start);
			 break;
		case 2 : insertend(start);
			 display(start);
			 break;
		case 3 : insertbefore(start,3);
			 display(start);
			 break;
		case 4 : insertafter(start,3);
			 display(start);
			 break;
		case 5 : delstart(start);
			 display(start);
			 break;
		case 6 : delend(start);
			 display(start);
			 break;
		case 7 : delbefore(start,3);
			 display(start);
			 break;
		case 8 : delafter(start,3);
			 display(start);
			 break;
	}
	
}
