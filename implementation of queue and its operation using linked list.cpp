#include<stdio.h>
#include<stdlib.h>
struct queue
{
	int data;
	struct queue *next;
};
struct queue *front=0,*rear=0,*temp=0;
void enqueue()
{
	struct queue *newnode=0;
	newnode=(struct queue*)malloc(sizeof(struct queue));
	printf("\nenter element : ");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(front==0)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue()
{
	if(front==0)
	{
		printf("\nunderflow");
	}
	else
	{
		temp=front;
		printf("\nThe poped element is %d",front->data);
		front=front->next;
		free(temp);
		if(front==0)
		{
			rear=0;
		}
	}
}
void peek()
{
	if(front==0)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nThe front element is %d",front->data);
	}
}
void display()
{
	if(front==0)
	{
		printf("\nunderflow");
	}
	else
	{
		temp=front;
		while(temp!=0)
		{
			printf("\n%d",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int choice,ch;
	printf("\n1. ENQUEUE()\n2. DEQUEUE()\n3. PEEK()\n4. DISPLAY()");
	while(ch)
	{
	printf("\nenter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		default:
			printf("\nINVALID OPTION");
	}
	printf("\nDO YOU WANT ANOTHER OPTION (YES:1||NO:0): ");
	scanf("%d",&ch);
}
	return 0;
}
