#include<stdio.h>
#include<stdlib.h>
int search( int a[20] ,int n ,int key );
void sort(int a[20],int n );
int readarray(int t[20]);
void print(int a[20], int n);
int search(int a[20],int n,int key)
{
	int i;

	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			
			return -1;
		}
		else 
		{
		 return -2;	
		 } 
		
	}
}
void sort(int a[20],int n)
{
	int i,j, p;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}
			
		}
		
		
	}
	
}
int readarray(int t[20])
{
	int i,n,z;
	printf("\n enter the elements of array");
	scanf("%d",&n);
	
	printf("\n enter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&t[i]);
	return z;
	
}
void print(int a[20], int n )
{
	int i,ser,k,key,j;
	printf("\n 1: search result \n 2: sorted array \n enter any of the above option");
				scanf("%d",&k);
				switch(k)
				{
				 
				case 1:     
							if(ser==-1)
							printf("\n key found at %d",i);  
							else if(ser==-2)
							printf("\n key not found");	
							break;

				case 2:		printf("\n sorted array");
							for(j=0;j<n;j++)
							{
								printf(" \n %d ",a[j]);
							}
							break;
				default :  printf("\n invalid input");
	
                 }
             }
int main()
{
	int a[20],t[20],z,s,n,key,i,j,p,ser,k;
	while(1)
	{
	printf("\n here are the available option");
	printf("\n 1: enter\n 2: searching \n 3: sorting \n 4:print \n 5:exit");
	scanf("%d",&s);
	switch(s)
	{
		case 1:     z=readarray(a);
					break;
		case 2: 	printf("\n enter the element to be found");
					scanf("%d",&key);
					ser=search(a,n,key);
					break;
		case 3:		sort(a,n);
					break;     
		case 4:		print(a,n);
					break;
		case 5: 	exit(0);
		default:  	printf("\n INVALID INPUT");
	
	}
}
	
}
