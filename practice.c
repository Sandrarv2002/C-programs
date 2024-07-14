#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
	printf("\n enter the no of elements");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	avg=(float)sum/n;
	printf("\n the average of %d numbers is %f",n,avg);
	return 0;
}
