#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee 
{
	unsigned long int id;// employee id
	char name[50];//employee name
	float salary,da,hra,tsalary;// basic salary ,da,hra
	char a[100];//residence address
	char p[100];// place
    long int pin;//pincode 
	char post[100];// post of the employee
	int exp;

	printf("\n ENTER THE NAME");
	gets(name[i]);
	printf("\nENTER THE ADDRESS");
	scanf("%s",add[i]);
		printf("\n ENTER EMAIL ID");
	scanf("%s",mail[i]);
	printf("\n ENTER THE QUALIFICATION");
	scanf("%s",qual[i]);
	printf("\nENTER THE NAME OF INSTITUTION ");
	scanf("%s",inst[i]);
		printf("\n ENTER THE POSITION OF THE EMPLOYEE");
	scanf("%s",post[i]);
}emp;
int main()
{
	int i,n;
	printf("ENTER THE NUMBER OF EMPLOYEES WHOSE INFORMATION IS TO BE ADDED");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\n ENTER THE DETAILS");
	printf("\n ENTER THE EMPLOYEE's ID");
	scanf("%lu",&emp.id);
	printf("\n ENTER THE EMPLOYEE's NAME");
	scanf("%s",emp.name);
	printf("\n ENTER THE EMPLOYEE's POST ");
	scanf("%s",emp.post);
	printf("\n ENTER THE EMPLOYEE's ADDRESS");
	printf("\n ENTER THE EMPLOYEE's RESIDENCE NAME");
	scanf("%s",emp.a);
	printf("\n ENTER THE EMPLOYEE's PLACE");
	scanf("%s",emp.p);
	printf("\n ENTER THE PINCODE");
	scanf("%d",&emp.pin);
	printf("\n ENTER THE BASIC SALARY");
	scanf("%f",&emp.salary);
	printf("\n ENTER THE EXPERIENCE OF THE EMPLOYEE IN YEARS");
	scanf("%d",&emp.exp);
	
	}
	for(i=0;i<n;i++)	`          
	{
	
		emp.tsalary=(1+emp.da+emp.hra)*emp.salary;
		printf("\n EMPLOYEE ID: %d  \n NAME: %s  \n POST : %s\n ADDRESS : %s\n%s\n %d\n BASIC SALARY:%f\n EXPERIENCE:%d",emp.id,emp.name,emp.post,emp.a,emp.p,emp.pin,emp.salary,emp.exp);
	
	}
	return 0;
	
}

