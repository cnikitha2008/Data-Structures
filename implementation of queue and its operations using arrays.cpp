#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;
void enqueue()
{
	int a;
	if(rear==MAX-1)
	{
		printf("\noverflow");
	}
	else
	{
		printf("\nenter element : ");
		scanf("%d",&a);
		if(rear==-1&&front==-1)
		{
			rear++;
			front++;
			queue[rear]=a;
		}
		else
		{
			rear++;
			queue[rear]=a;
		}
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		if(rear==front)
		{
			printf("\nThe dequeued element is %d",queue[front]);
			rear=front=-1;
		}
		else
		{
			printf("\nThe dequeued element is %d",queue[front]);
			front++;
		}
	}
}
void peek()
{
	if(front==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nThe front element is %d",queue[front]);
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n %d",queue[i]);
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
