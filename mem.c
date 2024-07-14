#include<stdio.h>
/*int main()
{
	int nb,np,blk[10],pro[10],i,j,alloc[10],allocb[10];
	printf("\n enter the no of blocks");
	scanf("%d",&nb);
	printf("\n enter tha no of process");
	scanf("%d",&np);
	printf("\n enter the block size");
	for(i=0;i<nb;i++){
		scanf("%d",&blk[i]);
		alloc[i]=-1;
	}
	printf("\n entre the process size");
	for(i=0;i<np;i++){
		scanf("%d",&pro[i]);
	}
	for(i=0;i<np;i++)
	{
		for(j=0;j<nb;j++)
		{
			if(blk[j]>=pro[i]&&blk[j]!=0)
			{
				alloc[i]=j;
				allocb[i]=blk[j];
				blk[j]=0;
				break;
			}
		}
	}
		printf("\n process no\t\t\t\tprocess size\t\t\t\tblock no\t\t\t\tblock size\n");
		printf("\n----------------------------------------------------------------------\n");
	for(i=0;i<np;i++){
		printf("%d\t\t\t\t",i+1);
		printf("%d\t\t\t\t",pro[i]);
		if(alloc[i]!=-1)
			printf("%d\t\t\t\t",alloc[i]+1);
		else
			printf("not allocated\t\t\t\t");
			
		printf("%d\n",allocb[i]);
	}
	return 0;
}*/
int main(){
	int i,j,nb,np,blk[10],pro[10],b,alloc[10],allocb[10];
	printf("\n enter the no of blocks");
	scanf("%d",&nb);
	printf("\n enter tha no of process");
	scanf("%d",&np);
	printf("\n enter the block size");
	for(i=0;i<nb;i++){
		scanf("%d",&blk[i]);
		alloc[i]=-1;
	}
	printf("\n entre the process size");
	for(i=0;i<np;i++){
		scanf("%d",&pro[i]);
	}
	for(i=0;i<np;i++)
	{
		b=-1;
		for(j=0;j<nb;j++)
		{
			if(blk[j]>=pro[i]&& blk[j]!=0)
			{
				if(b==-1)
					b=j;
				else if(blk[b]>blk[j])
				{
					b=j;
				}
			}
		}
		if(b!=-1)
		{
			alloc[i]=b;
			allocb[i]=blk[b];
			blk[b]=0;
		}
	}
	printf("\n process no\t\t\t\tprocess size\t\t\t\tblock no\t\t\t\tblock size\n");
		printf("\n----------------------------------------------------------------------\n");
	for(i=0;i<np;i++){
		printf("%d\t\t\t\t",i+1);
		printf("%d\t\t\t\t",pro[i]);
		if(alloc[i]!=-1)
			printf("%d\t\t\t\t",alloc[i]+1);
		else
			printf("not allocated\t\t\t\t");
			
		printf("%d\n",allocb[i]);
	}
	return 0;
}
