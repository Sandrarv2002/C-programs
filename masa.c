#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int search(int);
int details(int );
int  display(int );
	char name[100],add[100],post[100],mail[100];
	int age[100],exp[100],join[100],pass[100],empid[100];
	char qual[100], inst[200];
	float salary[100];
	unsigned long int phno[100];
	int i,id,a,b,c,n,option;
int details(int c)
{
	for(i=0;i<c;i++)
	{
	printf("\n ENTER THE DETAILS OF THE EMPLOYEE");
	printf("\n ENTER THE EMPLOYEE ID");
	scanf("%d",&empid[i]);
	printf("\n ENTER THE NAME");
	scanf("%s",name[i]);
	printf("\nENTER THE ADDRESS");
	scanf("%s",add[i]);
	printf("\n ENTER THE AGE");
	scanf("%d",&age[i]);
	printf("\n ENTER THE CONTACT DETAILS");
	printf("\n ENTER THE PHONE NUMBER");
	scanf("%lu",&phno[i]);
	printf("\n ENTER EMAIL ID");
	scanf("%s",mail[i]);
	printf("\n ENTER THE QUALIFICATION");
	scanf("%s",qual[i]);
	printf("\nENTER THE NAME OF INSTITUTION ");
	scanf("%s",inst[i]);
	printf("\n ENTER THE YEAR OF PASSING OUT");
	scanf("%d",&pass[i]);
	printf("\n ENTER THE EXPERIENCE OF THE EMPLOYEE");
	scanf("%d",&exp[i]);
	printf("\n ENTER THE POSITION OF THE EMPLOYEE");
	scanf("%s",post[i]);
	printf("\n ENTER THE BASIC SALARY");
	scanf("%f",&salary[i]);
	}
	return 0;
}
int  display(int a)
{
	printf("\n EMPLOYEE ID:%d",empid[a]);
	printf("\nNAME:%s",name[a]);
	printf("\nADDRESS:%s",add[a]);
	printf("\nAGE:%d",age[a]);
	printf("\nPHONE  NUMBER:%lu",phno[a]);
	printf("\nEMAIL ID:%s",mail[a]);
	printf("\nQUALIFICATION:%s",qual[a]);
	printf("\nNAME OF THE INSTITUTION:%s",inst[a]);
	printf("\nYEAR OF PASSING:%d",pass[a]);
	printf("\nEXPERIENCE:%d",exp[a]);
	printf("\nPOSITION:%d",post[a]);
	printf("\nBASIC SALARY:%f",salary[a]);
	return 0;
}
int  search(int b)
{
	printf("\n ENTER THE EMPLOYEE'sID TO VIEW DETAILS");
	scanf("%d",&id);
	for(i=0;i<b;i++)
	{
		if(empid[i]==id)
		{
		display(id);
		}
		else 
		printf("\n INVALID INPUT");
		
	}
	return 0;
}
int main()
{
	FILE *fp;
	fp=fopen("emp.txt","a");
	if(fp==NULL)
	{
	printf("\n FILE CANNOT BE OPENED");
	}


	while(1)
	{
		 	printf("\nENTER THE NUMBER OF THE EMPLOYEE's");
			scanf("%d",&n);
			printf("\n  1: TO ADD EMPLOYEE DETAILS\n 2: TO VIEW THE DETAILS OF THE EMPOLOYEE\n 3:EXIT");
			printf("\n ENTER ANY OF THE ABOVE OPTION");
			scanf("%d",&option);
	switch(option)
	{
		case 1:
				details(n);
				break;
		case 2: search(n);
				break;
		case 3:
				exit(0);
	}
}
	return 0;
}
