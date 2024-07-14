#include<stdio.h>
#include<stdlib.h>
int search( int a[] ,int ,int );
void sort(int a[],int );
int readarray(int t[]);
void print(int a[], int );


int search(int a[20],int n,int key)
{
	int i;
	printf("\n enter an element to search");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			return i;
		}

	}
	return -1;
}
void sort( int a[20], int n)
{
	int i,j,p;
	p=0;
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
	int n,i;
	printf("\n enter the no of elements");
	scanf("%d",&n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
	}
	return n;
}
void print(int a[20],int n)
{
	int i;
	printf("\n the array is");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
}
int main()
{
	int a[20],i,s,key,ser,n;
	while(1)
	{
		printf("\n 1:enter \n 2:sort \n 3: searching \n 4:print \n 5: exit \n enter any of above option");
		scanf("%d",&s);
		switch(s)
		{
				case 1: 	
							n=readarray(a);
							break;
				case 2:		
							sort(a,n);
							break;
				case 3: 
							ser=search(a,n,key);
							if(ser==-1)
							{
								printf("\n key not found");
								
							}
							else
							{
								ser+=1;
								printf("\n ket found at %d",ser);
							}
							break;
				case 4: 
							print(a,n);
							break;
				case 5:
							exit(0);
				default :
					        printf("\n invalid input");
			}
			
		
		}
		return 0;
	}

