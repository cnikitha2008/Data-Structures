#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top=0,*temp=0;
void push()
{
	struct stack *newnode=0;
	newnode=(struct stack*)malloc(sizeof(struct stack));
	printf("\nenter element : ");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}
void pop()
{
	if(top==0)
	{
		printf("\nunderflow");
	}
	else
	{
		temp=top;
		top=top->next;
		printf("\nThe poped element is %d",temp->data);
		free(temp);
	}
}
void peek()
{
	if(top==0)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nThe top most element is %d",top->data);
	}
}
void display()
{
	if(top==0)
	{
		printf("\nunderflow");
	}
	else
	{
		temp=top;
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
	printf("\n1. PUSH()\n2. POP()\n3. PEEK()\n4. DISPLAY()");
	while(ch)
	{
	printf("\nenter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
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
