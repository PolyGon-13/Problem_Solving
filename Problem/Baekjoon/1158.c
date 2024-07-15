#include <stdio.h>

int main()
{
	int i,j,n,k,cnt;
	int arr[5001]={0,};
	scanf("%d %d",&n,&k);
	
	j=1;
	putchar('<');
	for(i=0;i<n;i++)
	{
		cnt=0; // 삭제할 위치를 카운트하기 위해 초기화
		while(1)
		{
			if(arr[j]==0) // 배열arr에서 j번째 사람이 삭제되지 않았다면 cnt 1증가
				cnt++;
			
			if(cnt==k) // k번째 사람을 찾은 경우
			{
				arr[j]=-1; // 해당 사람 제거 (배열의 모든 요소를 0으로 초기화한 뒤 사람을 제거했다면 -1로 바꾸는 방식)
				if(i==n-1) // 마지막 사람을 제거하고 있는 경우
					printf("%d>",j);
				else
					printf("%d, ",j);
				
				break;
			}
			j++; // 다음 요소로 넘어감
			if(j>n)
				j=1;
		}
	}
	putchar('\n');
	
	return 0;
}

// 연결리스트를 이용한 풀이
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __node
{
	int data;
	struct __node *next;
} Node;

typedef struct _List
{
	Node *head; // 머리 노드
	Node *tail; // 꼬리 노드
	Node *cur; // 삭제할 노드의 위치
	Node *before; // cur 바로 직전의 노드
} CList;

typedef CList List;

void Init(List *plist)
{
	plist->head=NULL;
	plist->tail=NULL;
	plist->cur=NULL;
	plist->before=NULL;
}

void Insert(List *plist,int data)
{
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=data;
	
	if(plist->head==NULL)
	{
		plist->head=newNode;
		plist->tail=newNode;
		newNode->next=newNode;
	}
	else
	{
		newNode->next=plist->tail->next;
		plist->tail->next=newNode;
		plist->tail=newNode;
	}
}

void Cur_Init(List *plist)
{
	plist->cur=plist->tail;
	plist->before=plist->tail;
}

int Shift(List *plist,int k)
{
	plist->cur=plist->cur->next;
	
	int i;
	for(i=0;i<k-1;i++)
	{
		plist->before=plist->cur;
		plist->cur=plist->cur->next;
	}
	
	return plist->cur->data;
}

void Remove(List *plist)
{
	Node *rpos=plist->cur;
	if(rpos==plist->tail)
	{
		if(plist->tail==plist->tail->next)
		{
			plist->head=NULL;
			plist->tail=NULL;
		}
		else
			plist->tail=plist->before;
	}
	plist->before->next=plist->cur->next;
	plist->cur=plist->before;
	free(rpos);
}

int main()
{
	int i;
	int n,k;
	scanf("%d %d",&n,&k);
	
	List list;
	Init(&list);
	
	for(i=1;i<=n;i++)
		Insert(&list,i);
	
	Cur_Init(&list);
	
	printf("<%d",Shift(&list,k));
	Remove(&list);
	
	for(i=0;i<n-1;i++)
	{
		printf(", %d",Shift(&list,k));
		Remove(&list);
	}
	putchar('>');
	putchar('\n');
	
	return 0;
}
*/
