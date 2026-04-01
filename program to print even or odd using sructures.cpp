#include<stdio.h>
typedef struct number
{
	int a;
}num;
int main()
{
	num x;
	printf("enter a number : ");
	scanf("%d",&x.a);
	if(x.a % 2 == 0)
	{
		printf("\n%d is even number",x.a);
	}
	else
	{
		printf("\n%d is odd number",x.a);
	}
	return 0;
}
