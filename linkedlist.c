#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	struct node*head;
};
void insertbeg(	int item)
{
	struct node*p,*head;
	p=(struct node*)malloc(sizeof(struct node*));
	if(p==NULL)
		printf("memory not allocated");
	else
		p->data=item;
		p->next=head;
		head=p;
}
void insertend(int item)
{
	struct node*p,*temp,*head;
	p=(struct node*)malloc(sizeof(struct node*));
	if(p==NULL)
		printf("memory not allocated");
	else
	{
		p->data=item;
		if(head==NULL)
		{
			p->next=NULL;
			head=p;
			printf("node inserted");
		}
		else
		{
			temp=head;
			printf("node inserted");
		}
			
			while(temp!=NULL)
				temp=temp->next;
			temp->next=p;
			p->next=NULL;
	}
}
void insertpos(int item,int loc)
{
	int i;
	struct node*p,*temp,*head;
	p=(struct node*)malloc(sizeof(struct node*));
	if(p==NULL)
		printf("memory not allocated");
	else
	{
		temp=head;
		for(i=0;i<loc-1;i++)
		{
			temp=temp->next;
		}
		if(temp==NULL)
			printf("cant allocate memory");
		p->data=item;
		temp->next=p->next;
		temp->next=p;
		printf("node inserted");
	}
	
}
void display()
{
	struct node*p,*head;
	p=head;
	if(p==NULL)
		printf("empty");
	else
	{
		while(p!=NULL)
		{
			printf("%d  ",p->data);
			p=p->next;
		}
			
	}
}
int main()
{
	int s,item,loc;
	while(1)
	{
		printf("enter any option\n1:insert beg\n2:insert end\n3:insert position\n4:display\n 5:exit");
		scanf("%d",&s);
		switch(s)
		{
			case 1: printf("enter the item");
				scanf("%d",&item);
				insertbeg(item);
				break;
			case 2:printf("enter the item");
				scanf("%d",&item);
				insertend(item);
				break;
			case 3:printf("enter the item");
				scanf("%d",&item);
				printf("enter the pos");
				scanf("%d",&loc);
				insertpos(item,loc);
				break;
			case 4:display();
					break;
			case 5: break;
	}
	}
	}

