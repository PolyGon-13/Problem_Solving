#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int front;
	int rear;
	int num;
	int max;
	int *deque;
} IntDeque;

int Initialize(IntDeque *d,int max)
{
	d->num=d->front=d->rear=0;
	
	if((d->deque=calloc(max,sizeof(int)))==NULL)
	{
		d->max=0;
		return -1;
	}
	d->max=max;
	
	return 0;
}

int push_front(IntDeque *d,int x)
{
	if(d->num>=d->max)
		return -1;
	
	d->num++;
	if(--d->front<0)
		d->front=d->max-1;
	d->deque[d->front]=x;
	
	return 0;
}

int push_back(IntDeque *d,int x)
{
	if(d->num>=d->max)
		return -1;
	
	d->num++;
	d->deque[d->rear++]=x;
	d->rear=d->rear%d->max; // d->rear가 d->max를 넘어가는 것 방지
	
	return 0;
}

int pop_front(IntDeque *d,int *x)
{
	if(d->num<=0)
		return -1;
	
	d->num--;
	*x=d->deque[d->front++];
	d->front=d->front%d->max;
	
	return 0;
}

int pop_back(IntDeque *d,int *x)
{
	if(d->num<=0)
		return -1;
	
	d->num--;
	if(--d->rear<0)
		d->rear=d->max-1;
	*x=d->deque[d->rear];
	
	return 0;
}

int size(const IntDeque *d)
{
	return d->num;
}

int empty(const IntDeque *d)
{
	return (d->num<=0);
}

int front(const IntDeque *d)
{
	if(d->num<=0)
		return -1;
	
	return d->deque[d->front];
}

int back(const IntDeque *d)
{
	if(d->num<=0)
		return -1;
	
	int temp;
	if((temp=d->rear-1)<0)
		temp=d->max-1;
	
	return d->deque[temp];
}

int main()
{
	IntDeque deq;
	
	int n,x;
	scanf("%d",&n);
	Initialize(&deq,n);
	
	char cmd[12];
	while(n--)
	{
		scanf("%s",cmd);
		
		if(!strcmp("push_front",cmd))
		{
			scanf("%d",&x);
			push_front(&deq,x);
		}
		else if(!strcmp("push_back",cmd))
		{
			scanf("%d",&x);
			push_back(&deq,x);
		}
		else if(!strcmp("pop_front",cmd))
		{
			if(pop_front(&deq,&x)==0)
				printf("%d\n",x);
			else
				puts("-1");
		}
		else if(!strcmp("pop_back",cmd))
		{
			if(pop_back(&deq,&x)==0)
				printf("%d\n",x);
			else
				puts("-1");
		}
		else if(!strcmp("size",cmd))
			printf("%d\n",size(&deq));
		else if(!strcmp("empty",cmd))
			printf("%d\n",empty(&deq));
		else if(!strcmp("front",cmd))
			printf("%d\n",front(&deq));
		else if(!strcmp("back",cmd))
			printf("%d\n",back(&deq));
	}
	
	return 0;
}
