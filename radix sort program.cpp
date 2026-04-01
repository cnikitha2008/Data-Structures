#include<stdio.h>
void countsort(int a[], int n, int place)
{
	int count[10],temp[n],i;
	for(i=0;i<10;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		count[(a[i]/place)%10]++;
	}
	for(i=1;i<10;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		temp[--count[(a[i]/place)%10]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=temp[i];
	}
}
void radixsort(int a[], int n)
{
	int max=a[0],place,i;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(place=1;max/place>0;place=place*10)
	{
		countsort(a,n,place);
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
	radixsort(a,n);
	printf("\nAfter sorting : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
