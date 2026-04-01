#include<stdio.h>
struct time
{
	unsigned int hrs : 5;
	unsigned int min : 6;
	unsigned int sec : 6;
};
int main()
{
	struct time t;
	int a,b,c;
	printf("enter time in format (hrs,min,sec) : ");
	scanf("%d %d %d",&a,&b,&c);
	t.hrs=a;
	t.min=b;
	t.sec=c;
	printf("\n%d hh : %d mm : %d ss",t.hrs,t.min,t.sec);
	return 0;
}
