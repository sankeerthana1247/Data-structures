#include<stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

void insert_end(struct node *head, int data);
void print_data(struct node *head);
int main()
{
	int data;
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->link=NULL;

	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=20;
	current->link=NULL;

	head->link=current;

	current=(struct node*)malloc(sizeof(struct node));
	current->data=30;
	current->link=NULL;

	head->link->link=current;
	printf("Enter data for last node");
	scanf("%d",&data);
	
	insert_end(head,data);
	//print_data(head);
}

void insert_end(struct node *head,int data)
{
	struct node *temp=head;
	struct node *new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->link=NULL;

	while(temp->link!=NULL)
	{
		
		temp=temp->link;
			
	}
	temp->link=new;
	print_data(head);
}
void print_data(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{	
		printf("%d->",temp->data);		
		temp=temp->link;			
	}
}

