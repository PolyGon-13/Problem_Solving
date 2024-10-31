#include <stdio.h>
#include <string.h>

int que[10000];
int que_size=0;

void enque(int x)
{
	que[que_size]=x;
	que_size++;
}

int empty()
{
	if(que_size==0)
		return 1;
	return 0;
}

int deque()
{
	if(empty())
		return -1;
	
	que_size--;
	return que[0];
}

int front()
{
	if(empty())
		return -1;
	return que[que_size-que_size];
}

int back()
{
	if(empty())
		return -1;
	return que[que_size-1];
}

void setting()
{
	int i;
	for(i=0;i<que_size;i++)
		que[i]=que[i+1];
}
// 데이터가 pop되면 앞으로 전부 밀어주는 방식 => 뭔가 실행속도를 따지는 문제이면 오래 걸릴 것 같음

int main()
{	
    int n;
	scanf("%d",&n);
	
	int num;
	char text[6];
	while(n--)
	{
		scanf("%s",text);
		
		// strcmp함수 => string1이 string2보다 작으면 0보다 작은 값, 같으면 0, 크면 0보다 큰 값을 반환
		if(!strcmp(text,"push"))
		{
			scanf("%d",&num);
			enque(num);
		}
		else if(!strcmp(text,"pop"))
		{
			printf("%d\n",deque());
			setting();
		}
		else if(!strcmp(text,"empty"))
			printf("%d\n",empty());
		else if(!strcmp(text,"size"))
			printf("%d\n",que_size);
		else if(!strcmp(text,"front"))
			printf("%d\n",front());
		else if(!strcmp(text,"back"))
			printf("%d\n",back());
	}
	
	return 0;
}
