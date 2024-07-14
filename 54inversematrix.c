#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],m,n,i,j,p,q,k,z=0;
	printf("\n ENTER THE DIMENSIONS OF FIRST MATRIX");
	scanf("%d%d",&m,&n);
	printf("\n ENTER THE DIMENSIONS OF SECOND MATRIX");
	scanf("%d%d",&p,&q);
	if(m==n&&p==q&&m==p)
	{
	printf("\n ENTER THE ELEMENTS OF FIRST MATRIX");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				
			}
		}
		printf("\n ENTER THE ELEMENTS OF SECOND MATRIX");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&b[i][j]);
				
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(c[i][i]!=1&&c[i][j]!=0)
			
				 z=1;
			}
		}
		if(z==1)
			printf("\n  NOT INVERSE");
		else 
		    printf("\n  INVERSE");
		
	}
	return 0;
}
	
