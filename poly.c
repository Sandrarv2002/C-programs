#include<stdio.h>
struct poly
{
	int coeff;
	int exp;
}p1[10],p2[10],p3[10];
int read(struct poly[]);
int add(struct poly[],struct poly[],int,int,struct poly[]);
void display(struct poly[],int terms);
int main()
{
	int t1,t2,t3;
	t1=read(p1);
	printf("\n  first polynomial  :  ");
	display(p1,t1);
	t2=read(p2);
	printf("\n  second polynomial : ");
	display(p2,t2);
	t3=add(p1,p2,t1,t2,p3);
	printf("\n resultant polynomial is : ");
	display(p3,t3);
}
int read(struct poly p[10])
{
	int t1,i;
	printf("\n enter the no of elements");
	scanf("%d",&t1);
	printf("\n enter the elements");
	for( i=0;i<t1;i++)
	{
		printf("\n enter the coefficient:%d",i+1);
		scanf("%d",&p[i].coeff);
		printf("\n enter the exponent:%d",i+1);
		scanf("%d",&p[i].exp);
	}
	return t1;
}
int add(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[10])
{
	int i=0,j=0,k=0;
	while(i<t1&&j<t2)
	{
		if(p1[i].exp==p2[j].exp)
		{
			p3[k].coeff=p1[i].coeff+p2[j].coeff;
			p3[k].exp=p1[i].exp;
			i++;
			j++;
			k++;
		}
		else if(p1[i].exp>p2[j].exp)
		{
			p3[k].coeff=p1[i].coeff;
			p3[k].exp=p1[i].exp;
			i++;
			k++;
	    }
	    else
	    {
	    	p3[k].coeff=p2[j].coeff;
	    	p3[k].exp=p2[j].exp;
	    	j++;
	    	k++;
		}
		
	}
	while(i<t1)
	{
		if(p1[i].exp>p2[j].exp)
		{
			p3[k].coeff=p1[i].coeff;
			p3[k].exp=p1[i].exp;
			i++;
			k++;
		}
	}
	while(j<t2)
	{
		    if(p1[i].exp<p2[j].exp)
		    {
			p3[k].coeff=p2[j].coeff;
	    	p3[k].exp=p2[j].exp;
	    	j++;
	    	k++;
	        }
	}
}
void display(struct poly p[10],int terms)
{
	int k;
	for(k=0;k<terms-1;k++)
	
		printf("%d(x^%d)+",p[k].coeff,p[k].exp);
		printf("%d(x^%d)",p[terms-1].coeff,p[terms-1].exp);
	
}
