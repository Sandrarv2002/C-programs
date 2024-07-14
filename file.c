#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("emp.txt","w");
	if(fp==NULL)
	{
		printf("\n file cannot be opened");
	}
	return 0;
}
