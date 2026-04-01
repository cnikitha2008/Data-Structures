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
void insert_at_position()
{
	int i,pos;
	printf("\nenter position : ");
	scanf("%d",&pos);
	struct node *enode=0;
	enode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter newly created node data : ");
	scanf("%d",&enode->data);
	enode->prev=0;
	enode->next=0;
	if(pos==1)
	{
		enode->next=head;
		head->prev=enode;
		head=enode;
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		enode->prev=temp;
		enode->next=temp->next;
		temp->next=enode;
		enode->next->prev=enode;
	}
}
int main()
{
	create();
	printf("\nBefore insertion : ");
	display();
	insert_at_position();
	printf("\nAfter insertion : ");
	display();
	return 0;
}
