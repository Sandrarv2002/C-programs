#include<stdio.h>
int main()
{
	int n,d,s=0;
	printf("\n enter anumber");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		s=s*10+d;
		
	}
	printf("%d",s);
	return 0;
}
