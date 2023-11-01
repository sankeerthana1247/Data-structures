#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
 struct node*link;
};
int main()
{
 struct node *head;
 head=(struct node*)malloc(sizeof(struct node*));
 head->data=50;
 head->link=NULL;
 printf("%d",head->data);
 printf("\n%d",head->link);
}

