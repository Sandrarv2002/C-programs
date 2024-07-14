#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,sum=0,c=-1,p,m;
	printf("\n enter a number");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		d=n%10;
		n=n/10;
		c++;
	}
	while(m!=0)
	{
		p=m%10;
		m=m/10;
		sum+=p*pow(10,c--);
		
	}
	printf("\n number=%d",sum);
}
