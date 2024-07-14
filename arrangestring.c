#include<stdio.h>
#include<string.h>
int main()
{
	int n,j,i;
	char s[100][100],t[100][100];
	printf(" enter the no of strings");
	scanf("%d",&n);
	printf("\n enter the strings ");
	
	for(i=0;i<n;i++)
	{
	  	gets(s[i]);
		
	}
	for(i=1;i<n;i++)
	{
	 	for(j=0;j<n-i;j++)
	 	{
	 		if(strcmp(s[i],s[i+1])>0)
	 		{
	 			strcpy(t,s[i]);
	 			strcpy(s[i],s[i+1]);
	 			strcpy(s[i+1],t);
	 			
			 }
		 }
	}	
	for(i=0;i<n;i++)
	{
		puts(s[i]);
		
	}
	return 6;
}
