#include<stdio.h>
#include<stdlib.h>
struct node
{
	int coef;
	int exp;
	struct node *next;
};
struct node *head=0,*temp=0;
void create()
{
	int n,i;
	struct node *enode=0;
	printf("\nenter number of terms : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		enode=(struct node*)malloc(sizeof(struct node));
		printf("\nenter %d term coefficient : ",i+1);
		scanf("%d",&enode->coef);
		printf("\nenter %d term exponent : ",i+1);
		scanf("%d",&enode->exp);
		enode->next=0;
		if(head==0)
		{
			head=temp=enode;
		}
		else
		{
			temp->next=enode;
			temp=enode;
		}
	}
}
void display()
{
	printf("\nThe Polynomial is ");
	temp=head;
	while(temp!=0)
	{
	
	    if(temp->coef!=0)
		{
		    printf("%+dx^%d",temp->coef,temp->exp);
        }
    	else
	    {
		printf("+0");
	    }
		temp=temp->next;
	}
}
int main()
{
	create();
	display();
	return 0;
}
