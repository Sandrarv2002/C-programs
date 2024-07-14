#include<stdio.h>
#define size 5
int front=-1; int rear=-1;
struct pq
 {
 	int ITEM;
 	int PRIO;
 }a[5];
 void enqueue(int item,int prio)
 {
 	int i,loc;
 	if(front==0 && rear==size-1)
 	{
 		printf("full");
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
		a[rear].ITEM=item;
		a[rear].PRIO=prio;
	}
	else if(rear==size-1)
	{
		for(i=front;i<rear;i++)
		{
			a[i-1]=a[i];
			front--;
			rear--;
		}
		for(i=rear;i<front;i--)
		{
			if(a[i].PRIO<prio)
				break;
		}
		loc=i+1;
		for(i=rear;i<loc;i++)
		{
			a[i+1]=a[i];
			a[loc].ITEM=item;
			a[loc].PRIO =prio;
			rear++;	
		}
	}
	else
	{
		for(i=rear;i<front;i--)
		{
			if(a[i].PRIO<prio)
				break;
		}
		loc=i+1;
		for(i=rear;i<loc;i++)
		{
			a[i+1]=a[i];
			a[loc].ITEM=item;
			a[loc].PRIO =prio;
			rear++;	
		}
	}
 }
 void display()
 {
 	int i;
 	if(front==-1)
 		printf("empty");
 	else
 	{
 		for(i=front;i<=rear;i++)
 			printf("%d",a[i].ITEM );
	 }
 }
 int main()
 {
 		int s,item,prio;
 		while(1)
 		{
 			printf("enter option");
 			scanf("%d",&s);
 			switch(s)
 			{
 				case 1:	printf(" enter the data");
 						scanf("%d",&item);
 						printf("enter the prio");
 						scanf("%d",&prio);
				 		enqueue(item,prio);
				 		break;
				case 2: display();
						break;
			 }
 		}
 	
 }
