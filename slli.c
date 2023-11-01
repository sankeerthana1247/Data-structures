#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*link;
};

int main()

{
struct node *head=malloc(sizeof(struct node));
head->data=10;
head->link=NULL;

struct node*current=malloc(sizeof(struct node));
current->data=20;
current->link=NULL;
head->link=current;

current=malloc(sizeof(struct node));
current->data=30;
current->link=NULL;
head->link->link=current;
insert_end(head);
}

void insert_end(struct node *head){
struct node *temp=head;
struct node*new=malloc(sizeof(struct node));
new->data=25;
new->link=NULL;

while(temp->link!=NULL)
{
    temp=temp->link;
}
temp->link=new;

temp=head;    

while(temp!=NULL)
{
         printf("%3d->",temp->data);
         temp=temp->link;
}                       
}     

