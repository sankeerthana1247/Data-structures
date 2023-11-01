#include<stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node* reverse_sll(struct node *head);
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
	
	head=reverse_sll(head);
	print_data(head);
	
}	
 struct node* reverse_sll(struct node *head)
 {
       struct node *prev=NULL;
       struct node *next=NULL;
       
       while(head!=NULL)
       {
              next=head->link;
              head->link=prev;
              prev=head;
              head=next;
       }
       head=prev;
       return head;
       
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
	
