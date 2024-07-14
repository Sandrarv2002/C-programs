#include<stdio.h>
unsigned int fib(int); // time consuming program
int main()
{
	int n, f;
	printf("\n enter a no");
	scanf("%d",&n);
	f=fib(n);
	printf("\n%d ",f);
	return 0;
}
unsigned int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else if(n>=2)
	return fib(n-1)+fib(n-2);
}
