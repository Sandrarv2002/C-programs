#include<stdio.h>
#include<stdlib.h>
struct process
{
	int pid;
	int arr_t;
	int start_t;
	int burst_t;
	int res_t;
	int waiting_t;
	int completion_t;
	int turnaround_t;
	int prio;
	struct process *next;
	struct process *prev;
	
};
struct process *head,*p,*q;
void display(int n)
{
	p=head;
	int i;
	printf("\npid\tarrival time\tburst time\tstart time\tresponse time\tcompletion time\tturnaround time\twaiting time\tpriority\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t %d\t %d\t%d\t%d\t%d\t%d\t%d\t%d\n",p->pid,p->arr_t,p->burst_t,p->start_t,p->res_t,p->completion_t,p->turnaround_t,p->waiting_t,p->prio);
	//	printf("\t\t\t%d\n",p->start_t);
		p=p->next;
	}
}
void calculate(int n)
{
	q=head;
	int i=0;
	while(q!=NULL)
	{
		if(q==head)
		{
			q->start_t=q->arr_t;
			q->res_t=q->start_t- q->arr_t;
			q->completion_t=q->start_t+q->burst_t;
			q->turnaround_t=q->completion_t-q->arr_t;
			q->waiting_t=q->turnaround_t-q->burst_t;
			p=q;
			i++;
		}
		else
		{
			if(i==1)
			q->start_t=p->completion_t;
			else
			q->start_t=q->start_t+q->burst_t;
			q->res_t=q->start_t- q->arr_t;
			q->completion_t=q->start_t+q->burst_t;
			q->turnaround_t=q->completion_t-q->arr_t;
			q->waiting_t=q->turnaround_t-q->burst_t;
			i++;
			
		}
		q=q->next;
	}
	display(n);
}

void sort(int n)
{
	struct process*current=head,*index=NULL,*temp,*temp1,*temp2;
//	int temp;
	if(head==NULL)
	{
		exit(0);
	}
	else
	{
		while(current!=NULL)
		{
			index=current->next;
			while(index!=NULL)
			{
				if(current->arr_t>index->arr_t)
				{
					temp=current->arr_t;
					current->arr_t=index->arr_t;
					index->arr_t=temp;
					temp1=current->pid;
					current->pid=index->pid;
					index->pid=temp1;
					temp2=current->burst_t;
					current->burst_t=index->burst_t;
					index->burst_t=temp2;
					
				}
				index=index->next;
			}
			current=current->next;
		}
	}
	calculate(n);	
}

void main()
{
	int n,i;
	printf("\n enter the number of process");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
			p=(struct process*)malloc(sizeof(struct process));
			printf("\n enter the pid");
			scanf("%d",&p->pid);
			printf("\n enter the arrival time ");
			scanf("%d",&p->arr_t);
			printf("\n enter the burst time");
			scanf("%d",&p->burst_t);
			printf("\nenter the priority");
			scanf("%d",&p->prio);
			if(p==NULL)
			{
				printf("\n memory cannot be allocated");
			}
			else
			{
				p->next=head;
				head=p;
				head->prev=NULL;
			}
	}
	sort(n);
}
