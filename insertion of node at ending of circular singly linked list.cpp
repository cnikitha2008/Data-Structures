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
void insert_end()
{
	struct node *enode=0;
	enode=(struct node*)malloc(sizeof(struct node));
	printf("\nenter newnode data : ");
	scanf("%d",&enode->data);
	enode->next=0;
	tail->next=enode;
	tail=enode;
	tail->next=head;
	printf("\nAfter Insertion : ");
	display();
	printf("\n%d",tail->next->data);
}
int main()
{
	create();
	printf("\nBefore Insertion : ");
	display();
	insert_end();
	return 0;
}
