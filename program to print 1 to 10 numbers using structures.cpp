#include<stdio.h>
typedef struct number
{
	int a;
}num;
int main()
{
	num x={1};
	int i;
	for(i=1;i<=10;i++)
	{
		printf("\n %d",x.a);
		x.a++;
	}
	return 0;
}
