#include<stdio.h>
int max(int a[100],int l,int h);
int max(int a[100],int l,int h)
{
	int z;
	if(l==h)
	{
		return a[l];
	}
	else
	{
		z=max(a,l+1,h);
		if(a[l]>z)
		{
			return a[l];
		}
		else 
		{
			return z;
		}
	}
}
int main()
{
	int a[100],k,i,n,l=0,h;
	printf("\n ENTER THE NUMBER OF ELEMENTS");
	scanf("%d",&n);
	h=n;
	printf("\n ENTER THE ELEMENTS ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=max(a,l,h);
	printf("\n MAXIMUM :%d",k);
	return 0;
	
}
