#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno,m1,m2,m3;
}s;
int main()
{
	int i,n;
	printf("\n Enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the details of students");
		printf("'\n enter the name");
		scanf("%s",s.name);
		printf("\n enter the rollno");
		scanf("%d",&s.rollno);
		printf("\n enter the marks of three subjects");
		scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
		
	}
		for(i=0;i<n;i++)
	{ 
	    printf("\n Name: %s",s.name);
		printf("Roll no: %d",s.rollno);
		printf("\n mark1: %d \n mark2: %d \n mark3:%d",s.m1,s.m2,s.m3);
		
	}
	
	return 0;
}

