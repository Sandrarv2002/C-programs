#include<stdio.h>
unsigned int fib(int); // memory consuming program
int main()
{
	unsigned int f;
	int n;
	printf("\n enter a no");
	scanf("%d",&n);
	f=fib(n);
	printf("\n%lu ",f);
	return 0;
}
unsigned int fib(int n)
{
	long int f[500];
	int i;
	f[0]=0;
	f[1]=1;
	for(i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	return f[n];
}

