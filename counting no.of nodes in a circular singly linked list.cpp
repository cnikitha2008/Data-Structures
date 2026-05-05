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
void count()
{
	int count=0;
	temp=head;
	do
	{
		count++;
		temp=temp->next;
	}while(temp!=head);
	printf("\nNo.of nodes = %d",count);
}
int main()
{
	create();
	count();
	return 0;
}
