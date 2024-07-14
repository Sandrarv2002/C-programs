#include<stdio.h>
#include<stdlib.h>
int n;
int q[];
int front=-1;
int rear=-1;
void enqueue(int a)
{
	
	if(rear==n-1)
		printf("\n overflow");
	else
	{
	 
		if(front==-1 )
		{
			front=0;
		}
		rear=rear+1;
		q[rear]=a;
		
	}
}
void dequeue()
{
	
	if(front==-1|| front>rear)
	 printf("\n queue empty");
	else 
	{
		
			front=front+1;
	
	}

}
void display()
{
	int i;
	if(front==-1&&rear==-1)
		printf("\nqueue empty");
	else
	{
		for(i=front;i<=rear;i++)
		{
			
			printf("%d",q[i]);
		}
	
	}
}
int main()
{
	int i,s,k;
	printf("\n enter the size of queue");
	scanf("%d",&n);
	printf("\n enter the elements of queue");
	while(1)
	{
		printf("\n 1:insertion\n2:deletion\n3:display\n:exit\n enter any of the above option");
		scanf("%d",&s);
		switch(s)
		{
			case 1: 
					printf("\n enter the element to be inserted");
					scanf("%d",&k);
					enqueue(k);
					n=n+1;
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4:  exit(0);
		}
	}
	
}
