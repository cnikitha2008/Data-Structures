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
	t.hrs=9;
	t.min=54;
	t.sec=60;
	printf("%d hh : %d mm : %d ss",t.hrs,t.min,t.sec);
	return 0;
}
