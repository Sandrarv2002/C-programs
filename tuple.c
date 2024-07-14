#include<stdio.h>
int s[10][10],t[10][10];
void sparse(int a[10][10],int m,int n)
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
	printf("TRIPLET\n");
	for(i=0;i<=s[0][2];i++)
	printf("%d\t%d\t%d\n",s[i][0],s[i][1],s[i][2]);
}
void transpose()
{
	int i,j,k=1;
	t[0][0]=s[0][1];
	t[0][1]=s[0][0];
	t[0][2]=s[0][2];
	for(i=0;i<=s[0][2];i++)
	{
		for(j=1;j<=s[0][2];j++)
		{
			 if(s[j][1]==i)
			 {
			 	t[k][0]=s[j][1];
			 	t[k][1]=s[j][0];
			 	t[k][2]=s[j][2];
				k++;
			 }
		}
	}
	printf("TRANSPOSE\n");
	for(i=0;i<=s[0][2];i++)
	printf("%d\t%d\t%d\n",t[i][0],t[i][1],t[i][2]);
}
void add(int s[20][3],int t[20][3])
{
	int x,y,r,l,m,n,i,j,k,a[20][3];
	x=s[0][0];
	y=s[0][1];
	m=t[0][0];
	n=t[0][1];
	if(x!=m||y!=t)
		printf("\n incompatible matrix size");
	else
	{
		a[0][0]=s[0][0];
		a[0][1]=s[0][1];
		m=1;
		n=1;
		k=1;
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++)
			{
				if(s[m][0]==i&&s[m][1]==j&&t[n][0]==i&&t[n][1]==j)
				{
					a[k][0]=s[m][0];
					a[k][1]=s[m][1];
					a[k][2]=s[m][2]+t[n][2];
					m++;
					n++;
					k++;
				}
			}
		}
		for(i=0;i<=a[0][2];i++)
		printf("%d\t%d\t%d\n",a[i][0],a[i][1],a[i][2]);
	}
}
int main()
{
	int c[10][10],d[10][10],m,n,p,q,i,j;
	printf("\n enter the dimensions of the first matrix");
	scanf("%d%d",&m,&n);
	printf("\n enter the elements of first matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	printf("\n enter the dimensions of the second matrix");
	scanf("%d%d",&p,&q);
	printf("\n enter the elements of second matrix");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&d[i][j]);
		}
	}
	printf("\n tuple form of first matrix");
	sparse(c,m,n);
	printf("\n transpose of firstmatrix");
	transpose();
	printf("\n tuple form of second matrix");
	sparse(d,p,q);
	printf("\n transpose of seconsd matrix");
	transpose();
	printf("\n sum of matrices");
	add(s,t);
	return 1;
}
