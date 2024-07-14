#include<stdio.h>
#include<stdlib.h>
int q[100],item,size=10,i,rear=-1,front=-1;
void enqueue()
{
	if(rear==size-1)
		printf("\n QUEUE FULL");
	else
	{
		if(front==-1)
			front=0;
		printf("\n ENTER THE ELEMENTS");
		scanf("%d",&item);
		rear++;
		q[rear]=item;
	}
}
void dequeue()
{
	if(front==-1||front>rear)
		printf("\n QUEUE EMPTY");
	else
	{
			item=q[front];
			printf("\n ELEMENT DELETED IS :%d", item);
			front++;
	}
}
void display()
{
	if(rear==-1)
		printf("QUEUE EMPTY");
	else 
	{
		for(i=front;i<=rear;i++)
			printf("%d\n " ,q[i]);
	}
}
int main()
{
	int s;
	printf("ENTER THE SIZE OF QUEUE");
	scanf("%d",&size);
	while(1)
	{
		printf("\n 1:INSERTION \n 2:DELETION \n 3:DISPLAY\n 4:EXIT");
		printf("\n enter any of the above choice");
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
					break;
			default: printf("\n INVALID INPUT");
		}
	}
	return 0;
}
