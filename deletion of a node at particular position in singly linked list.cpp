#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=0,*new_node=0,*temp=0;
void create()
{
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
}
void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}
int main()
{
	create();
	printf("\nBefore deletion");
	display();
	int pos,i;
	printf("\nenter position : ");
	scanf("%d",&pos);
	struct node *ptr=0;
	if(head==NULL)
	{
		printf("\n list is empty");
	}
	else if(pos==1)
	{
		temp=head;
		head=head->link;
		free(temp);
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->link;
		}
		ptr=temp->link;
		temp->link=ptr->link;
		free(ptr);
	}
	printf("\nAfter deletion : ");
	display();
	return 0;
}
