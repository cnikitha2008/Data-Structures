#include<stdio.h>
#include<ctype.h>
int stack[100];
int top=-1;
int main()
{
	char exp[100];
	int i=0;
	printf("\nenter postfix expression : ");
	fgets(exp,sizeof(exp),stdin);
	while(exp[i]!='\0')
	{
		if(exp[i]==' ' || exp[i]=='\n')
		{
			i++;
			continue;
		}
		if(isdigit(exp[i]))
		{
			int num=0;
			while(isdigit(exp[i]))
			{
				num=num*10+(exp[i]-'0');
				i++;
			}
			top++;
			stack[top]=num;
			continue;
		}
		else
		{
			int op1,op2;
			op1=stack[top];
			top--;
			op2=stack[top];
			top--;
			switch(exp[i])
			{
				case '+':
					top++;
					stack[top]=op2+op1;
					break;
				case '-':
					top++;
					stack[top]=op2-op1;
					break;
				case '*':
					top++;
					stack[top]=op2*op1;
					break;
				case '/':
					top++;
					stack[top]=op2/op1;
					break;
			}
		}
		i++;
	}
	printf("\nResult = %d",stack[top]);
	return 0;
}
