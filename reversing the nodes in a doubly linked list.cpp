#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=0,*tail=0,*temp=0;
void create()
{
	int i,n;
	printf("enter n size : ");
	scanf("%d",&n);
	struct node *newnode=0;
	for (i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter node %d data : ",i+1);
		scanf("%d",&newnode->data);
		newnode->prev=0;
		newnode->next=0;
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
	}
}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void reverse()
{
	struct node *currentnode=0,*nextnode=0;
	currentnode=head;
	while(currentnode!=0)
	{
		nextnode=currentnode->next;
		currentnode->next=currentnode->prev;
		currentnode->prev=nextnode;
		currentnode=nextnode;
	}
	currentnode=head;
	head=tail;
	tail=currentnode;
}
int main()
{
	create();
	printf("\nBefore reversing : ");
	display();
	reverse();
	printf("\nAfter reversing : ");
	display();
	return 0;
}
