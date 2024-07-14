#include<stdio.h>
int number(int);
int  number(int n)
{
	int i=1,m=0;
	while(i<=n)
	{
		if(n%i==0)
		{
			m++;
		}
	i++;
	}
	return m;
	
}
int main()
{
	int s, m,i,a;
	printf("\n enter a number ");
	scanf("%d",&a);
	s=number(a);
	if(s>2)
	{
		printf("\n the no is composite");
	}
	else if(s==2)
	{
		printf("\n the no is prime");
	}
	
	
}
