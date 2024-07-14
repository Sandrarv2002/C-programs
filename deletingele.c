#include<stdio.h>
int main()
{
	int a[10],i,n,pos;
	printf("\n enter the no of elements");
	scanf("%d",&n);
	printf("\n enter the elements of the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n  enter the position of the element to be deleted");
	scanf("%d",&pos);
	for(i=0;i<n;i++)
	{
		if(i==pos)
		{
			a[i]=a[i+1];
		}
	}
	printf("\n the array after deleting the element");
	for(i=0;i<n-1;i++)
	printf("\n %d ",a[i]);
	return 0;
	
}
