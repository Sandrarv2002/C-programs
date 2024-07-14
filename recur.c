#include<stdio.h>
int fact(int n);
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return (n*fact( n-1));
	
}
int main()
{
	int a,f=0;
	printf("\n enter a number");
	scanf("%d",&a);
	f=fact(a);
	printf("\n factorial is:%d",f);
	return 0;
	
}

