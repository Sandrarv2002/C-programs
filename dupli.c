#include<stdio.h>
int main()
{
	int a[100],b[100],i,n,j,sum=0,k=0;
	printf("\n enter the number of elements");
	scanf("%d",&n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=sum;
			}
			
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=sum)
		{
			b[k++]=a[i];
		}
		if(k==0)
		printf("%d",sum);
	}

	
	for(i=0;i<n;i++)
	{
		printf("\n %d",b[i]);
	}
	return 0;
}
