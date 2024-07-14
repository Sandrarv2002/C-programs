#include<stdio.h>
int main()
{
	int a[100][100],i,j,r=0,s=0,n,m;
	printf("\n ENTER DIMENSIONS OF MATRIX");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("\n ENTER THE ELEMENTS");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
	           if(i==j)
	           {
	           	if(a[i][j]!=0)
	           	s=1;
			   }
			   else if(a[i][j]==0)
			   {
			   	r=2;
			   }
			 			
			
			}
		}
		if(s==1&&r==2)
		printf("\n DIAGONAL MATRIX");
		else 
		printf("\n NOT A DIAGONAL MATRIX");
		
		
	}
	return 0;
}
