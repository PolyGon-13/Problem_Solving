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
	// front push는 배열의 시작 인덱스부터가 아닌 가장 뒤쪽 인덱스부터 push함
	// max개의 요소를 갖는 배열을 만들었으므로 인덱스는 0부터 max-1까지 존재하기에 max-1이 마지막 인덱스임
	d->deque[d->front]=x;
	// 위쪽 if문에서 d->front를 검사할 때 참 거짓 여부 상관없이 --d->front로 인해 감소해서 오기 때문에 차곡차곡 데이터를 쌓을 수 있음
	
	return 0;
}
// 원형 큐를 직접 그려서 이해하면 쉬움
// 0부터 6까지의 인덱스를 갖는 배열이 있다면, front는 6->5->4 순으로 데이터를 쌓고, rear는 0->1->2 순으로 데이터를 쌓음
// front는 4까지, rear는 2까지 데이터를 쌓았다고 가정하고, 원형큐를 쭉 펼쳐서보면, [2 1 0 6 5 4] 처럼 나타낼 수 있음
// 현재 rear는 2번 인덱스를, front는 4번 인덱스를 가리키고 있으므로 덱의 역할을 잘 수행하고 있다고 할 수 있음

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
	// front는 위의 주석의 예시를 그대로 가져오면 6->5->4 순으로 데이터를 쌓음
	// 그러므로 4번 데이터를 pop하면 d->front를 1 증가시켜 5번 데이터를 가리키도록 하는 것이 맞음
	d->front=d->front%d->max;
	
	return 0;
}

int pop_back(IntDeque *d,int *x)
{
	if(d->num<=0)
		return -1;
	
	d->num--;
	if(--d->rear<0) 
	// push_back 함수에서 rear는 push 작업 수행 후 1 증가시켜 d->max를 넘는지 판단하는 코드가 존재했음
	// 따라서 현재 아무 데이터가 없는 인덱스를 가리키고 있기에 1 감소시켜 가장 최신 데이터를 가리키도록 해줌
		d->rear=d->max-1;
	*x=d->deque[d->rear];
	// 해당 작업 수행 후 d->rear를 수정해줄 필요는 없음
	// 어짜피 push_back 함수에서 해당 데이터를 덮어 쓸 것이기에 d->num만 1 감소시켜주면 끝
	
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
	
	if((d->rear-1)<0)
		return d->deque[d->max-1];
	else
		return d->deque[d->rear-1];
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
