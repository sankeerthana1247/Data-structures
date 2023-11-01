#include<stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
};

struct node* del_last(struct node *head);
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


head=del_last(head);
print_data(head);
}

struct node* del_last(struct node *head)
{
struct node *temp=head;
if(temp==NULL)
printf("Empty list");
else
{
while(temp->link->link!=NULL)
{
temp=temp->link;
}
free(temp->link);
temp->link=NULL;
}
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
