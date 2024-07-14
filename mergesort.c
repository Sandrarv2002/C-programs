#include<stdio.h>
void mergesort(int[],int,int);
void merge(int[],int,int,int);
void mergesort(int a[],int l,int u)
{
	int mid;
	if(l<u)
	{
		
		 mid =(l+u)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,u);
		merge(a,l,mid,u);
	}
}
void merge(int a[],int l,int mid,int u)
{
	int i,j,k,b[50];
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid && j<=u)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}k++;
	}
	if(i>mid)
	{
		while(j<=u)
		{
			b[k]=a[j];
			j++; k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			k++; i++;
		}
	}
	for(k=l;k<=u;k++)
	{
		a[k]=b[k];
	}
}
int main()
{
	int a[50],i,j,n;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("\n \n after sorting");
	for(i=0;i<n;i++)
	{
		printf(" \n %d", a[i]);
	}

return 0;
}
