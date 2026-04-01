#include<stdio.h>
struct student 
{
	int roll;
	float marks;
	char grade;
};
int main()
{
	struct student s1,s2;
	s1={101,98.2,'B'};
	s2=s1;
	printf("Student roll number = %d\nStudent marks = %f\nStudent grade = %c",s2.roll,s2.marks,s2.grade);
	return 0;
}
