#include<stdio.h>
int perfectsquare(int);
int main()
{
	int n,i,sqroot=0,s;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		s= perfectsquare(i);
		if(s!=-1)
		{
	 		printf("\n  root of %d is %d",i,s);
		}
	}
}
int perfectsquare(int n)
{
	int sqroot=0,i;
	for(i=1;1;i+=2)
	{
		n-=i;
		sqroot++;
		if(n<0)
		return -1;
		else if (n==0)
		return sqroot;
	}
}
