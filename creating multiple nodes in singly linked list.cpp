#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head=0,*new_node=0,*temp=0;
	int n,i;
	printf("enter n size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		printf("\nenter node %d data : ",i+1);
		scanf("%d",&new_node->data);
		new_node->link=0;
		if(head==NULL)
		{
			head=new_node;
			temp=new_node;
		}
		else
		{
			temp->link=new_node;
			temp=new_node;
		}
	}
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
	return 0;
}
