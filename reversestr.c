#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,l=0;
	char s[100],r[100];
	printf("\n enter the string to be reversed");
	gets(s);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
		r[j]=s[i];
		j++;
	}
		r[j]="\0";
		printf("\n the reversed string:");
		puts(r);
	return 0;
}
