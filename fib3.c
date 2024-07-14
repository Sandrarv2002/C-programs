#include<stdio.h>
int fib(int ); 
int fib(int n)
{
	int c,i,a=-1,b=1;
	for(i=0;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
	
}
int main()
{
	int n, f;
	printf("\n enter a no");
	scanf("%d",&n);
	f=fib(n);
	printf("\n%d ",f);
	return 0;
}


