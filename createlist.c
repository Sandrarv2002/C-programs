#include<stdio.h>
#include<stdlib.h>

	struct stud
	{
		int roll;
		char name[25];
		float cgpa;
		struct stud *next;
	};

	node*create()
	{
		int k,n;
		node*p,*head;
		printf("\n enter no of elements");
		scanf("%d",&n);
		for(k=0;k<n;k++)
		{
			if(k==0)
			{
				head=(node*)malloc(sizeof(node));
				p=head;		
			}		
			else
			{
				p.next=(node*)malloc(sizeof(node));
				p=p.next;
			}
			scanf("%d%s%f",&p.roll,p.name,&p.cgpa);
		}
		p.next=NULL;
		return head;
	}
	
}
int main()
{
	struct stud node*p,*head;
	create();
}
