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
		if(key==a[i])
		{
			
			return i;
		}
		else 
		{
			return -1;
		}
		
	}

}
void sort(int a[20],int n)
{
	int i,j, p=0;
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
int readarray(int a[20])
{
	int i,n,t[20];
	printf("\n enter the no of elements of array");
	scanf("%d",&n);
	
	printf("\n enter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&t[i]);
	return n;
	
}
void print(int a[20], int n )
{
	int i;
 	printf("\n the array is");
 	for(i=0;i<n;i++)
 	{
 		printf("%d  ",a[i]);
	 }
 	
  }
int main()
{
	int a[20],s,n,key=0,i,j,p,ser=0,k;
	while(1)
	{
	printf("\n here are the available option");
	printf("\n 1: enter\n 2: searching \n 3: sorting \n 4:print \n 5:exit");
	scanf("%d",&s);
	switch(s)
	{
		case 1:     n=readarray(a);
					break;
		case 2: 	printf("\n enter the element to be found");
					scanf("%d",&key);
					ser=search(a,n,key);
					if(ser==-1)
					printf("\n element  not found");
					else 
					{
						ser+=1;
						printf("\n key found at %d", ser);
					}
					break;
		case 3:		sort(a,n);
					break;     
		case 4:		print(a,n);
					break;
		case 5: 	exit(0);
		default:  	printf("\n INVALID INPUT");
	
	}
}
return 0;
	
}
