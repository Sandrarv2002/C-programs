#include<stdio.h>
int main()
{
	int i,j,n,burst[10],arrival[10],comple[10],wait[10],turn[10],start[10];
	printf("\n enter the no of process");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n enter the arrival time");
		scanf("%d",&arrival[i]);
		printf("\n enter the burst time");
		scanf("%d",&burst[i]);
	}
	int temp=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arrival[j]>arrival[j+1]){
				temp=arrival[j];
				arrival[j]=arrival[j+1];
				arrival[j+1]=temp;
				
				temp=burst[j];
				burst[j]=burst[j+1];
				burst[j+1]=temp;
			}
		}
	}
	int k=1,min=0,btime=0;
	for(i=0;i<n;i++)
	{
			btime+=burst[i];
			min=b[k];
			for(j=k;j<n;j++)
			{
				if(btime>=arrival[i]&&burst[j]<min)
				{
					temp=arrival[j];
					arrival[j]=arrival[j-1];
					arrival[j-1]=temp;
					
						
				temp=burst[j];
				burst[j]=burst[j-1];
				burst[j-1]=temp;
				}
			}k++;
	}
	
}
