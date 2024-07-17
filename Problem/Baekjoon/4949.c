#include <stdio.h>
#include <string.h>

char stack[102];

int main()
{
	int i;
	int top=-1;
	char arr[102];
	
	fgets(arr,102,stdin);
	
	while(strcmp(arr,".\n"))
	{
		for(i=0;i<strlen(arr);i++)
		{
			if(arr[i]=='(')
				stack[++top]=arr[i];
			else if(arr[i]==')')
			{
				if(stack[top--]!='(')
					break;
			}
			else if(arr[i]=='[')
				stack[++top]=arr[i];
			else if(arr[i]==']')
			{
				if(stack[top--]!='[')
					break;
			}
		}
		if(i!=strlen(arr) || top!=-1)
			puts("no");
		else
			puts("yes");
	
		top=-1;
		fgets(arr,102,stdin);
	}
	
	return 0;
}

// 기능들은 얼추 다 수행하는 것 같은데 틀린 오답 코드..아직 미해결;;
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int max;
	int ptr;
	int *stk;
} Stack;

int Initialize(Stack *s,int max)
{
	s->ptr=0;
	if((s->stk=calloc(max,sizeof(int)))==NULL)
	{
		s->max=0;
		return -1;
	}
	s->max=max;
	return 0;
}

int Push(Stack *s,int x)
{
	if(s->ptr>=s->max)
		return -1;
	s->stk[s->ptr++]=x;
	return 0;
}

int Pop(Stack *s)
{
	if(s->ptr<=0)
		return -1;
	s->ptr--;
	return 0;
}

int main()
{
	Stack s1;
	Stack s2;
	
	int i;
	int len,flag;
	char str[102];
	
	while(1)
	{
		fgets(str,sizeof(str),stdin);
		len=strlen(str)-1;
		flag=1;
		if(len==1 && str[0]=='.')
			break;
		
		if(Initialize(&s1,len)==-1 || Initialize(&s2,len)==-1)
			return 1;

		for(i=0;i<len;i++)
		{
			if(str[i]=='(')
			{
				Push(&s1,1);
			}
			else if(str[i]=='[')
			{
				Push(&s2,1);
			}
			else if(str[i]==')')
			{
				if(Pop(&s1)==-1)
				{
					flag=0;
					puts("no");
					break;
				}
			}
			else if(str[i]==']')
			{
				if(Pop(&s2)==-1)
				{
					flag=0;
					puts("no");
					break;
				}
			}
		}
		if(flag==1 && (s1.ptr!=0 || s2.ptr!=0))
		{
			puts("no");
			continue;
		}
		else if(flag!=0)
			puts("yes");
		
		free(s1.stk);
		free(s2.stk);
	}
	
	return 0;
}
*/
