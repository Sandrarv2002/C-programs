#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],i=0,j=0,m,n,k=0,y=0;
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
	for(i=0;i<n;i++)
	{
			for(j=0;j<m;j++)
			{
				b[i][j]=a[j][i];
			}
	}
	for(i=0;i<m;i++)
	{
			for(j=0;j<n;j++)
			{
				if(a[i][j]!=b[i][j])
				k=1;	
				else if(b[i][j]!=-a[i][j])
				y=1;			
				
			}
	}
	if(k==0)
	{
		printf("\n   SYMMETRIC MATRIX");
	}
	else if(y==0)
	{
	
		printf("\nSKEW SYMMETRIC MATRIX");
    }
    else
    {
    	printf("\nNONE OF THESE");
	}

	
}
return 0;
}
