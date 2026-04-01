#include <stdio.h>
struct student
{
	char name[20];
	int sub1,sub2,sub3;
}s;
void total(int a, int b, int c);
int main()
{
	printf("enter name : ");
	scanf("%[^\n]s",&s.name);
	printf("enter three subject marks : ");
	scanf("%d %d %d",&s.sub1,&s.sub2,&s.sub3);
	printf("\nName : %s",s.name);
	total(s.sub1,s.sub2,s.sub3);
	return 0;
}
void total(int a, int b, int c)
{
	int total = a+b+c;
	printf("\nTotal marks = %d",total);
}
