#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* insert_random(struct node *head, int data);
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
    printf("Enter data for first node");
    scanf("%d",&data);

    head=insert_random(head,data);
    print_data(head);
}

struct node* insert_random(struct node *head,int data)
{
    struct node *temp=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->link=NULL;
    
    int pos=3;
    pos--;
    while(pos!=1)
    {
         temp=temp->link;
         pos--;
    }
   new->link=temp->link;
   temp->link=new;
         
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
