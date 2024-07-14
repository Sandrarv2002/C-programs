#include<stdio.h>     
#include<stdlib.h>
#define size 4
int q[size],front=-1,rear=-1,ahead=0,item;
void insertfrontdq(item)
{
	if(front==0)
		ahead=size-1;
	else if(front==-1)
		ahead=0;
	else 
		ahead=front-1;
	if(ahead==rear)
		printf("\n queue full");
	else if(front==-1)
	{
		rear=0;
	}
		front=ahead;
		q[front]=item;
	
}
void insertreardq(item)
{
	if(rear==size-1)
			printf("\n queue full");
	else if(front==-1&& rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear++;
		q[rear]=item;
	}
}
void deletefrontdq()
{
	if(front==-1)
		printf("\n queue empty");
	else
	{
		item=q[front];
		if(front==rear)
		{
			rear=-1;
			front=-1;
		}
		else
			front++;
	}
}
void deletereardq()
{
	if(front==-1)
		printf("\n queue empty");
	else if(front==rear)
	{
		item=q[rear];
		front=-1;
		rear=-1;
	}
	else if(rear==0)
	{
		item=q[rear];
		rear--;
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("\n queue empty");
	else{
		if( front<=rear)
		{
			for(i=front;i<=rear;i++)
				printf("%d \n",q[i]);
		}
		else
		{
			for(i=front;i<size;i++)
				printf("%d\n",q[i]);
			for(i=0;i<=rear;i++)
				printf("%d\n",q[i]);
		}
		
	}
}
void main()
{
	int s;
	while(1)
	{
		printf("\n\n 1:insert at front\n2:insert at rear\n3:delete from front\n 4:delete from rear\n 5:display\n 6:exit\n\n");
		scanf("%d",&s);
		switch(s)
		{
			case 1: printf("\n\n enter the item");
					scanf("%d",&item);
					insertfrontdq(item);
					break;
			case 2: printf("\n\n enter the item");
					scanf("%d",&item);
					insertreardq(item);
					break;
			case 3: deletefrontdq();
					break;
			case 4: deletereardq();
					break;
			case 5: display();
					break;
			case 6:	exit(0);
					break;
			default : printf("\n invalid input");
		}
	}
}
