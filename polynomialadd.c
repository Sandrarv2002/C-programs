#include<stdio.h>
struct poly
{
	int coeff;
	int exp;

}p[10],q[10],r[10];
int main()
{
 	int i=0,j=0,k=0;//k - number of non zero elements
 	int n,m;
 	printf("\n enter the no of elements in first polynomial");
 	scanf("%d",&n);
 	printf("\n enter the no of elements in the second polynomial");
 	scanf("%d",&m);
 	printf("\n enter the coefficients and exponents in the first polynomial respectievely");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&p[i].coeff);
 		scanf("%d",&p[i].exp);
	 }
	 printf("\n enter the coefficients and exponents in the second polynomial respectievely");
 	for(j=0;j<m;j++)
 	{
 		scanf("%d",&q[j].coeff);
 		scanf("%d",&q[j].exp);
	 }
	 while(i<n&&j<m)
	 {
	 			if(p[i].exp==q[j].exp)
	 			{
	 				r[k].coeff=p[i].coeff+q[j].coeff;
	 				r[k].exp=p[i].exp;
	 				i++;
	 				j++;
	 				k++;	
				 }
				 else if(p[i].exp>q[j].exp)
				 {
				 	r[k].coeff=p[i].coeff;
				 	r[k].exp=p[i].exp;
				 	i++;
				 	k++;
				 }
			 	else if(p[i].exp<q[j].exp)
			 	{
			 		r[k].coeff=q[j].coeff;
			 		r[k].exp=q[j].exp;
			 		j++;
			 		k++;
				 }
		 
	 }
	 while(i<n)
	 {
	 	r[k].coeff=p[i].coeff;
	 	r[k].exp=p[i].exp;
	 	i++;
	 	k++;
	 }
	 while(j<m)
	 {
	 	r[k].coeff=q[j].coeff;
	 	r[k].exp=q[j].exp;
	 	j++;
	 	k++;
	 }
	for(i=0;i<k;i++)
	{
		printf("%dx^%d+",r[i].coeff,r[i].exp);
	}

	return 0;
}
