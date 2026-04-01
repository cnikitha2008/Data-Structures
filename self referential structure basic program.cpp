#include<stdio.h>
struct self
{
	int roll;
	float marks;
	struct self *ptr;
};
int main()
{
	struct self s1,s2;
	s1.roll=101,s1.marks=98.46,s1.ptr=NULL;
	s2.roll=102,s2.marks=78.42,s2.ptr=NULL;
	s1.ptr=&s2;
	printf("S2 roll and marks : \n%d\n%f",s1.ptr->roll,s1.ptr->marks);
	return 0;
}
