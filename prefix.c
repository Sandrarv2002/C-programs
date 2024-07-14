#include<stdio.h>
char a[20],p[20];
char s[20];
int s1[20];
int top=-1,top1=-1;
int prec(char c)
{
	switch(c)
	{
		case '+':
		case '-': return 1;
		case '/': 
		case '*': return 2;
		case '^': return 3;
	}
}
void prefix()
{
	int i=0,j=0;
	char x,y;
	while(a[i]!='\0')
	{
		if(isdigit(a[i]))
		  p[j++]=a[i];
		else if(a[i]=='(')
			s[++top]=a[i];
		else if(a[i]==')')
		{
			while(a[i]!='(')
			p[j++]=s[top--];
			top--;
		}
		else
		{
			x=a[i];
			y=s[top];
			if(top==-1||y=='('||prec(y)<prec(x))
			{
				s[++top]=a[i];
			}
		
			else{
					while(top!=-1&&y!='('&& prec(x)<=prec(y))
					{
						p[j++]=s[top--];
						y=s[top];
					}
					s[++top]=x;
				}
		}
			
		}i++;
	}
	while(top!=-1)
	p[j++]=a[top--];
	p[j]='\0';
	strrev(p);
	printf("%s",p);
}
void main()
{
	printf("enter exp");
	gets(a);
	prefix();
}

