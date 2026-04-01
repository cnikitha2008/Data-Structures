#include<stdio.h>
struct student
{
	int roll,marks;
};
int main()
{
	struct student s[100];
	int n,i,total;
	float avg;
	printf("enter no.of students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter roll number : ");
		scanf("%d",&s[i].roll);
		printf("\nenter student %d marks : ",i+1);
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(float)total/n;
	printf("\nTotal marks = %d\nAverage marks = %f",total,avg);
	return 0;
}
