#include<stdio.h>
int main()
{
	int a[10],i,j,n;
	printf("\n enter the no of elements");
	scanf("%d",&n);
	printf("\nenter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	printf("\n after sorting\n ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}
