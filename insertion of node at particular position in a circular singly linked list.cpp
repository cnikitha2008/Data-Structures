#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=0,*tail=0,*temp=0;
void create()
{
    struct node *new_node=0;
	int n,i;
	printf("enter n size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		printf("\nenter node %d data : ",i+1);
		scanf("%d",&new_node->data);
		new_node->next=0;
		if(head==NULL)
		{
			head=tail=new_node;
			tail->next=head;
		}
		else
		{
			tail->next=new_node;
			tail=new_node;
			tail->next=head;
		}
	}
}
void display()
{
	temp=head;
	do
	{
		printf(" %d\t",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
void insert_pos()
{
	int i,pos;
	printf("\nenter position : ");
	scanf("%d",&pos);
	struct node *enode=0;
	enode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter newnode data : ");
	scanf("%d",&enode->data);
	if(head==0)
	{
		head=tail=enode;
		tail->next=head;
	}
	else if (pos==1)
	{
		enode->next=head;
		head=enode;
		tail->next=head;
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		enode->next=temp->next;
		temp->next=enode;
	}
	printf("\nAfter Insertion : ");
	display();
	printf("\n%d",tail->next->data);
}
int main()
{
	create();
	printf("\nBefore Insertion : ");
	display();
	insert_pos();
	return 0;
}
