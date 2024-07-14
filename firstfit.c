#include<stdio.h>
#include<stdlib.h>
void firstfit(int blksize[],int m,int prosize[],int n)
{
	int i,j ,alloc[n];
	for(i=0;i<n;i++)
	{
		alloc[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(blksize[j]>=prosize[i])
			{
				alloc[i]=j;
				blksize[j]=prosize[i];
				break;
			}
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
void bestfit(int blksize2[],int m,int prosize2[],int n)
{
	int i,j ,alloc2[n];
	for(i=0;i<n;i++)
	{
		alloc2[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		int best=-1;
		for(j=0;j<m;j++)
		{
			if(blksize2[j]>=prosize2[i])
			{
				if(best==-1)
				 	best=j;
				else if(blksize2[best]>blksize2[j])
					best=j;
			}	
		}	
		if(best!=-1){
				alloc2[i]=best;
				blksize2[best]-=prosize2[i];
		}
			
		
	}
	printf("\n process no\tprocess size\tblock no\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t\t",i+1);
		printf("%d\t\t\t\t",prosize2[i]);
		if(alloc2[i]!=-1)
			printf("%d",alloc2[i]+1);
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
	int s;
	while(1){
	
	printf("\n enter the choice\n 1: first fit\n 2: best fit\n 3: worst fit\n");
	scanf("%d",&s);
	switch(s)
	{
		case 1: 	firstfit(blksize,m,prosize,n);
					break;
		case 2:     bestfit(blksize,m,prosize,n);
					break;
					
		case 3: exit(0);
					
	}

	}
	return 0;
}
