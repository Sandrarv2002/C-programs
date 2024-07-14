#include<stdio.h>
#include<stdlib.h>
void quicksort(int [],int ,int );
void binarysearch(int[],int ,int);
void quicksort(int a[],int left,int right)
{
	if(left<right)
	{
		int i=left+1;
		int j=right;
		int pivot=a[left];
		while(i<j)
		{
			while(a[i]<=pivot)
			{
				i++;
			}
			while(a[j]>pivot)
			{
				j--;
			}
			if(i<j)
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		int t=a[left];
		a[left]=a[j];
		a[j]=t;
		quicksort(a,left,j-1);
		quicksort(a,j+1,right);
	}
}
void binarysearch(int a[],int n,int key)
{
	int l=0,u=n,f=0;
	int m;
	if(l<=u)
	{
		m=(l+u)/2;
		if(a[m]==key)
		{
			f=1;
		}
		else if(a[m]>key)
		{
			u=m-1;
		}
		else if(a[m]<key)
		{
			l=m+1;
		}
	}
	if(f==1)
		printf(" found");
	else
		printf(" not found");
}
int main()
{
	int a[50],i,n,key;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	printf("\n \n after sorting");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n \n enter the element to nsearch");
	scanf("%d",&key);
	binarysearch(a,n,key);
	return 0;	
}
