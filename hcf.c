#include<stdio.h>
 int hcf(int a,int b)
 {
 	if(a%b==0)
 	return b;
 	else 
 	return hcf(b,a%b);
 }
 int main()
 {
 	int x,y,z;
 	printf("\n enter two numbers");
 	scanf("%d%d",&x,&y);
 	z=hcf(x,y);
 	printf("\n hcf is:%d",z);
 	return 0;
 }
