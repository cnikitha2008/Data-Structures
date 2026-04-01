#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *head=0,*new_node1=0;
	new_node1=(struct node*)malloc(sizeof(struct node));
	printf("enter node1 data : ");
	scanf("%d",&new_node1->data);
	new_node1->link=0;
	head=new_node1;
	struct node *new_node2=(struct node*)malloc(sizeof(struct node));
	printf("\nenter node2 data : ");
	scanf("%d",&new_node2->data);
	new_node2->link=0;
	new_node1->link=new_node2;
	printf("\n node1: %d|%p\n node2: %d|%p",new_node1->data,new_node1->link,new_node2->data,new_node2->link);
	return 0;
}
