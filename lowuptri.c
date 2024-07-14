#include<stdio.h>
int main()
{
	int a[100][100],m,n,i,j,z=0,x=0;
	printf("\nENTER THE DIMENSIONS OF MATRIX");
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
			if(j<i)
			{
			
					if(a[i][j]!=0)
					z=1;
				
			}
			else if(j>i)
			{
				if(a[i][j]!=0)
				 x=1;
			}
			}
		}
		if(z==0)
		printf("\n UPPER TRIANGULAR MATRIX");
		else if(x==0)
		printf("\n LOWER TRIANGULAR MATRIX");
		else 
		printf("\n NEITHER LOWER NOR UPPER");	
	
		 
	}
	return 0;
}
