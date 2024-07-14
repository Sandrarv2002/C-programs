#include<stdio.h>
int main()
{
	int a[100][100],i=0,j=0,m,n,z=0,k=0,c=0,d=0;
	printf("\n ENTER THE NUMBER OF ROWS AND COLUMNS");
	scanf("%d%d",&m,&n);
	if(m==n)
	
	{
	
	printf("\n ENTER THE ELEMENTS");
	for(i=0;i<m;i++)
	{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				
			}
	}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			if(a[i][j]!=0)
			{
				c=1;
				if(i!=j)
				{
					z=1;
				}
			}
			if(a[i][j]!=1)
			{
				d=1;
				if(i==j)
				{
					z=1;
				}
			}
			}
		}
		if(c==0)
		 printf("\n ZERO MATRIX");
		else if(d==0)
		 printf("\n UNITY MATRIX");
		 else if(z==0)
		  printf("\n IDENTITY MATRIX");
		  else 
		  printf("\n NONE OF THESE");
	}
	else ("\n INVALID INPUT");
	return 0;
}
