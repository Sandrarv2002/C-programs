#include<stdio.h>
#include<stdlib.h>
#define size 10
int cq[size],item,front=-1,rear=-1;
void enqueue()
{
	if(front==(rear+1)%size)
		printf("\n QUEUE OVERFLOW");
	else
	{
		printf("\n enter the element to be inserted");
		scanf("%d",&item);
		if(front==-1)
		{
			front=0;
			rear=0;
			cq[rear]=item;
		}
		else
		{
			rear=(rear+1)%size;
			cq[rear]=item;
		}
	}
}
void dequeue()
{
	if(front==-1)
	{
		printf("\n QUEUE UNDERFLOW");
	}
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		printf("\n deleted element is %d",cq[front]);
		front=(front+1)%size;
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("\n queue empty");
	else
	{
		if(front<=rear)
		{
				printf("\n circular queue");
				for(i=front;i<=rear;i++)
					printf("%d",cq[i]);
		}
	
	else
	{
		for(i=front;i<size;i++)
			printf("%d",cq[i]);
		for(i=0;i<=rear;i++)
			printf("%d",cq[i]);
	}
}
	
}
void main()
{
	int s;
	while(1)
	{
	printf("\n 1:INSERTION\n 2:DELETION\n 3:DISPLAY\n 4:Exit\n enter any of the above option");
	scanf("%d",&s);
		switch(s)
		{
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: exit(0);
		}
	}
}
