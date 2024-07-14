#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
	struct node * head;
}; 
void insertbeg(int item)
{
	struct node *p=(struct node*)malloc(sizeof(struct node*));
	struct node* head;
	if(p==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		p->data=item;
		p->next=head;
		head=p;
		printf("node inserted");
	}
	
}
void insertend(int item)
{
	struct node *p,*temp ,*head;
	p=(struct node*)malloc(sizeof(struct node *));
	if(p==NULL)
	{
		printf(" memory cannot be allocated");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			temp=temp->next;
		}
		temp->next=p;
		p->next=NULL;
		printf("\n node inserted");
	}
}
void insertpos(int loc,int item)
{
	int i;
	struct node*p,*temp,*head;
	p=(struct node*)malloc(sizeof(struct node*));
	if(p==NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		temp=head;
		for(i=0;i<loc-1;i++)
		{
			temp=temp->next;
		}
		if(temp==NULL)
			printf("cannot be inserted");
			p->data=item;
			p->next=temp->next;
			temp->next=p;
	}
}
void deletebeg()
{
	struct node*p,*head;
	if(head==NULL)
		printf("empty");
	else
	{
		p=head;
		head=p->next;
		free(p);	
	}
}
void deleteend()
{
	struct node*p,*ptr,*head;
	if(head==NULL)
		printf("empty");
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
	}
	else
	{
		p=head;
		while(p->next!=NULL)
		{
			ptr=p;
			p=p->next;
			p->next=NULL;
			free(p);
		}
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
			printf("%d",p->data);
			p=p->next;
		}
	}
}
int main()
{
	int s,item,pos;
	while(1)
	{
		printf("enter the option\n1:insert beg\n:2:inser end\n3:insert pos\n4:delete beg\n5:deleete end\n6:display\n7:exit");
		scanf("%d",&s);
		switch(s)
		{
			case 1: printf("enter data");
					scanf("%d",item);
					insertbeg(item);
					break;
			case 2: printf("enter data");
					scanf("%d",&item);
					insertend(item);
					break;
			case 3: printf("enter data");
					scanf("%d",&item);
					printf("enter pos");
					scanf("%d",&pos);
					insertpos(pos,item);
					break;
			case 4:deletebeg();
					break;
			case 5: deleteend();
					break;
			case 6: display();
					break;
			case 7: exit(0);
		}
	}
	return 0;
}
