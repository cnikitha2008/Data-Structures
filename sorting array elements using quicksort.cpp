#include<stdio.h>
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition (int a[],int low, int high)
{
	int pivot=a[low];
	int start=low;
	int end=high;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[low],&a[end]);
	return end;
}
void quicksort(int a[], int low, int high)
{
	if(low<high)
	{
		int location;
		location = partition(a,low,high);
		quicksort(a,low,location-1);
		quicksort(a,location+1,high);
	}
}
int main()
{
	int n;
	printf("\nEnter n size : ");
	scanf("%d",&n);
	int a[n],i;
	printf("\nEnter %d array elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("\nAfter Sorting : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;	
}
