#include<stdio.h>
#include<stdlib.h>
int front=-1; int rear=-1;
#define size 5
int q[size]; 
void enqueue(int item)
{
	if(front==(rear+1)%size)
	{
		printf("stack full");
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear=0;
			q[rear]=item;
		}
		else
		{
			rear=(rear+1)%size;
			q[rear]=item;
		}
	}
}
void dequeue()
{
	if(front==-1)
		printf("queue empty");
	else
	{	int item=q[front];
		if(front==rear)
			front=rear=-1;
		else
			front=(front+1)%size;
	}
}
void display()
{
	int i;
	if(front==-1)
			printf("\n empty");
	else
	{
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("\n %d",q[i]);
			}
		}
		else
		{
				for(i=front;i<size;i++)
				{
					printf(" \n %d",q[i]);
				}
				for(i=0;i<=rear;i++)
				{
					printf(" \n %d",q[i]);
				}
		}
	}
}
int main()
{
	int s,item;
	while(1)
	{
		printf("enter the option\n1:enqueue\n2:dequeue\n3:display\n4:exit\n");
		scanf("%d",&s);
		switch(s)
		{
			case 1: printf("\n enter the data");
					scanf("%d",&item);
					enqueue( item);
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
		}
	}
}
