#include<stdio.h>
int maximum(int,int);
int main()
{
	int a,b,c[100],i,n,m;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
		
	}
	m=c[0];
	for(i=1;i<n;i++)
	{
		m=maximum(m,c[i]);
	}
	printf("\n maximum is %d",m);
}
int maximum(int a,int b)
{
	return(a<b?b:a);
}

