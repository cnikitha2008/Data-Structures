#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
	if(top==MAX-1)
	{
		printf("\noverflow");
	}
	else
	{
		int a;
		printf("\nenter element : ");
		scanf("%d",&a);
		top++;
		stack[top]=a;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		int temp;
		temp=stack[top];
		printf("\nThe poped element is %d",temp);
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nThe top most element is %d",stack[top]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n %d",stack[i]);
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
