#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* top=NULL;
void push(int item)
{
	struct node *p=(struct node*)malloc(sizeof( struct node * ));
	if(p==NULL)
		printf("\n memory annot be allocated");
	else
	{
		p->data =item;
		p->next=top;
		top=p;
	}
	
}
void pop()
{
	if(top==NULL)
		printf("\n empty");
	else
	{
		struct 	node *ptr =top;
		int item=top->data;
		top=top->next;
		ptr->next=NULL;
	}
}
void display()
{
	if(top==NULL)
	{
		printf(" \n stack empty");
	}
	else{
		struct node*temp=top;
		while(temp!=NULL)
		{
			printf(" \n %d", temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int s;
	while(1){
	printf("enter any opt\n1:push\n2:pop\n3:display\n4:exit\n \n ");
	scanf("%d",&s);
	switch(s)
	{
		case 1: printf("\n enter the data");
				int item;
				scanf("%d",&item);
				push(item);
				break;
		case 2: pop();
				break;
		case 3: display();
				break;
		case 4: exit(0);
	}
	}
}
