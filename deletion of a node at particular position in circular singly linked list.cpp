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
void delete_pos()
{
	int i, pos;
    struct node *delnode=NULL;
    printf("\nenter position: ");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("\nLIST IS EMPTY");
    }
    else if(pos==1)
    {
        if(head==tail)
        {
            free(head);
            head=tail=NULL;
        }
        else
        {
            head=head->next;
            free(tail->next);
            tail->next=head;
        }
    }
    else
    {
        temp=head;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        delnode=temp->next;
        if(temp->next==tail)
        {
            temp->next=head;
            free(tail);
            tail=temp;
        }
        else
        {
            temp->next=delnode->next;
            free(delnode);
        }
    }
	printf("\nAfter Deletion : ");
	display();
	printf("\n%d",tail->next->data);
}
int main()
{
	create();
	printf("\nBefore Deletion : ");
	display();
	delete_pos();
	return 0;
}
