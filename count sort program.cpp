#include<stdio.h>
void countsort(int a[], int n)
{
	int max=a[0],i;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	int count[max+1],temp[n];
	for(i=0;i<=max;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=1;i<=max;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		temp[--count[a[i]]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=temp[i];
	}
}
int main()
{
	int n;
	printf("Enter array size : ");
	scanf("%d",&n);
	int a[n],i;
	printf("\nEnter %d array elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	countsort(a,n);
	printf("\nAfter sorting : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
