#include<stdio.h>
int b[10][10];
typedef struct
{
	int col;
	int row;
	int value;
}term;
term a[10];
void create()
{
	int k=1,i,j,n,m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[i][j]!=0)
			{
				a[k].row=i;
				a[k].col=j;
				a[k].value=b[i][j];
				k++;
			}
		
		}
	}
		a[0].row=m;
			a[0].col=n;
			a[0].value=k-1;
	printf("\n tuple form");
	for(i=0;i<k-1;i++)
	 	printf("%d\t%d\t%d\n",a[i].row,a[i].col,a[i].value);
}
int main()
{
	int i,m,j,n;
	printf("\n enter the dimensions");
	scanf("%d%d",&m,&n);
	printf("\n enter the elements ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	create();
	return 0;
}
