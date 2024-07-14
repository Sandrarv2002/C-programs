#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
	
char name[100],add[100],post[100],mail[100];
	int age[100],ex[100],join[100],pass[100],empid[100];
	char qual[100], inst[200];
	float salary[100];
	unsigned long int phno[100];
}empl[100];
	int i,n,option;
	void details()
	{
			printf("\nENTER THE NUMBER OF THE EMPLOYEE's");
			scanf("%d",&n);
		FILE *fp;
	fp=fopen("emp.txt","r");
	if(fp==NULL)
	{
	printf("\n FILE CANNOT BE OPENED");
	}
	printf("\n EMPLOYEE DETAILS");
	for(i=0;i<n;i++)
	{
	printf("\n ENTER THE DETAILS OF THE EMPLOYEE");
	printf("\n ENTER THE EMPLOYEE ID");
	scanf("%d",&empl[i].empid);
	printf("\n ENTER THE NAME");
	scanf("%s",empl[i].name);
	printf("\nENTER THE ADDRESS");
	scanf("%s",empl[i].add);
	printf("\n ENTER THE AGE");
	scanf("%d",&empl[i].age);
	printf("\n ENTER THE CONTACT DETAILS");
	printf("\n ENTER THE PHONE NUMBER");
	scanf("%lu",&empl[i].phno);
	printf("\n ENTER EMAIL ID");
	scanf("%s",empl[i].mail);
	printf("\n ENTER THE QUALIFICATION");
	scanf("%s",empl[i].qual);
	printf("\nENTER THE NAME OF INSTITUTION ");
	scanf("%s",empl[i].inst);
	printf("\n ENTER THE YEAR OF PASSING OUT");
	scanf("%d",&empl[i].pass);
}

	
}
void display()
{
	FILE*fp;
	char c;
	fp=fopen("emp.txt","r");
	if(fp==NULL)
	{
		printf("\n FILE CANNOT BE OPENED");
	
	}
	while(1)
	{
		c=getc(fp);
		if(c==EOF)
		{
		break;
		}
		else
		printf("%c",c);
	}
	
	fclose(fp);
}
	int main()
	{
			while(1)
	{
		 
			printf("\n  1: TO ADD EMPLOYEE DETAILS\n 2: TO VIEW THE DETAILS OF THE EMPOLOYEE\n 3:EXIT");
			printf("\n ENTER ANY OF THE ABOVE OPTION");
			scanf("%d",&option);
	switch(option)
	{
		case 1:
				details();
				break;
		case 2: display();
				break;
		case 3:
				exit(0);
	}
}
	return 0;
	
	}
