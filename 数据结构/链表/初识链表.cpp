#include<stdio.h> 

int main()
{
	struct node{
	int data;
	struct node * next;
};
	struct node *head,*mid,*last;
	head = (node*)malloc(sizeof(struct node));
	mid = (node*)malloc(sizeof(struct node));
	last = (node*)malloc(sizeof(struct node));
 	head->data =10;
 	mid ->data =20;
 	last->data=30;
 	head->next =mid;
 	mid->next=last;
 	last->next=null;
 } 
