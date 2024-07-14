#include<stdio.h>
void main()
{
	FILE*fp;
	int large,n;
	fp=fopen("fileop.txt","r");
	fscanf(fp,"%d",&large);
	while(feof(fp)==0)
	{
		fscanf(fp,"%d",&n);
		if(large<n)
		{
		 	large=n;
		}
	}fclose(fp);
	printf("\n the largest:%d",large);
	
}
