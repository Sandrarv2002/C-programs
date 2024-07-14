#include<stdio.h>
void bestfit(int blksize[],int m,int prosize[],int n)
{
	int i,j ,alloc[n];
	for(i=0;i<n;i++)
	{
		alloc[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		int best=-1;
		for(j=0;j<m;j++)
		{
			if(blksize[j]>=prosize[i])
			{
				if(best==-1)
				 	best=j;
				else if(blksize[best]>blksize[j])
					best=j;
			}	
		}	
		if(best!=-1){
				alloc[i]=best;
				blksize[best]-=prosize[i];
		}
			
		
	}
	printf("\n process no\tprocess size\tblock no\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t\t",i+1);
		printf("%d\t\t\t\t",prosize[i]);
		if(alloc[i]!=-1)
			printf("%d",alloc[i]+1);
		else
			printf("not allocated");
		printf("\n");
	}
}
int main()
{
	int m,n,i,blksize[20],prosize[20];
	printf("\n enter the no of blocks ");
	scanf("%d",&m);
	printf("\n entre the no of process");
	scanf("%d",&n);
	printf("\n entre the size of blocks");
	for(i=0;i<m;i++)
	{
		scanf("%d",&blksize[i]);
	}
	printf("\n enter the process");
	for(i=0;i<n;i++)
	{
		scanf("%d",&prosize[i]);
	}
	bestfit(blksize,m,prosize,n);
	return 0;
}
