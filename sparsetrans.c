#include<stdio.h>
int s[10][10],t[10][10];
void Sparse(int a[10][10],int m,int n)
{
	int i,j,k=1;
	s[0][0]=m;
	s[0][1]=n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				s[k][0]=i;
				s[k][1]=j;
				s[k][2]=a[i][j];
				k++;
			}
		}
	}
	s[0][2]=k-1;
	printf("\n TUPLE FORM\n");
	for(i=0;i<=s[0][2];i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",s[i][j]);
		}
		printf("\n");
	}
	
}
void Transpose()
{
	int m,n,j,i,k=1;
	t[0][0]=s[0][1];
	t[0][1]=s[0][0];
	t[0][2]=s[0][2];
	m=s[0][1];
	n=s[0][2];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i][j]==i)
			{
				t[k][0]=s[j][1];
				t[k][1]=s[j][0];
				t[k][2]=s[j][2];
				k=k+1;
			}
		}
	}
	printf("\n TUPLE FORM\n");
	for(i=0;i<=t[0][2];i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t ",t[i][j]);
		}
		printf("\n");
	}


}
void main()
{
	int i,j,a[10][10],m,n;
	printf("\n enter the number of rows and coloumns of matrix");
	scanf("%d%d",&m,&n);
	printf("\n enter the matrix");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
			
			Sparse( a ,m,n);
			Transpose();
}
