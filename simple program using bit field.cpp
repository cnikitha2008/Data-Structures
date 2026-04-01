#include<stdio.h>
struct student
{
	unsigned int first : 2;
	unsigned int second : 3;
};
int main()
{
	struct student s1;
	s1.first=3;
	s1.second=7;
	printf("\nfirst value = %d",s1.first);
	printf("\nsecond value = %d",s1.second);
	return 0;
}
