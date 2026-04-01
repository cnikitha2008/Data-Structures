#include<stdio.h>
struct student
{
	int roll;
	float marks;
};
void display(int a, float b);
int main()
{
	struct student s;
	printf("enter roll number : ");
	scanf("%d",&s.roll);
	printf("\nenter marks : ");
	scanf("%f",&s.marks);
	display (s.roll,s.marks);
	return 0;
}
void display(int a, float b)
{
	printf("\nStudent details:\nroll no. = %d\nmarks = %f",a,b);
}
