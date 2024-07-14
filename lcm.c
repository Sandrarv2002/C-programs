#include<stdio.h>
int lcm(int a,int b)
{
	int x;
	x=max(a,b);
	while(x<=a*b)
	{
		if(x%a==0&&x%b==0)
		
			return x;
			x++;
		
	}
}
int max(int m, int n)
{
	if(m>n)
	return m;
	else
	return n;
}
int main()
{
	int c,d,k;
	printf("\n enter two numbers");
	scanf("%d%d",&c,&d);
	k= lcm(c,d);
	printf("\n lcm is:%d",k);
	return 0;
}
