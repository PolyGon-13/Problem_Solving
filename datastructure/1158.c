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
	
	if(plist->head==NULL) // 큐가 비어있는 상황
	{
		plist->head=newNode; // 머리노드가 신규노드를 가리키도록 함
		plist->tail=newNode; // 꼬리노드가 신규노드를 가리키도록 함
		newNode->next=newNode; // 신규노드의 다음노드는 자기 자신을 가리키도록 함
	}
	else
	{
		newNode->next=plist->tail->next;
		// 신규노드가 이전의 꼬리노드가 다음노드로 가리키고 있었던 가장 처음 노드를 가리키도록 함
		plist->tail->next=newNode;
		// 이전 꼬리노드가 신규노드를 가리키도록 함
		plist->tail=newNode;
		// 꼬리노드를 신규노드로 수정
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
	// Cur_Init에서 plist->cur이 꼬리노드를 가리키도록 설정되었는데, 꼬리노드의 다음 노드 즉, 머리노드를 가리키도록 함
	
	int i;
	for(i=0;i<k-1;i++) // k번째로 이동해야 하므로, 0부터 k-1까지 반복
	{
		plist->before=plist->cur; // 변경되기 전의 plist->cur의 값을 받아옴
		plist->cur=plist->cur->next; // plist->cur은 머리노드부터 다음 노드로 계속 이동
	}
	
	return plist->cur->data; // 제거해야할 데이터를 반환
}

void Remove(List *plist)
{
	Node *rpos=plist->cur; // 제거해야 하는 노드를 지정
	
	if(rpos==plist->tail) // 꼬리노드를 제거하는 경우
	{
		if(plist->tail==plist->tail->next) // 큐에 노드가 하나만 남은 경우 (이 문제에서는 노드를 더 이상 추가하지 않으므로 불필요한 작업)
		{
			plist->head=NULL;
			plist->tail=NULL;
		} 
		else
			plist->tail=plist->before; // 꼬리노드를 삭제하므로 꼬리노드를 그 이전의 노드로 수정
	}
	
	// 꼬리 노드가 아닌 경우
	plist->before->next=plist->cur->next; // 제거한 노드 이전의 노드와 제거한 노드 이후의 노드를 연결
	plist->cur=plist->before; // list->cur을 제거한 노드 이전을 가리키도록 하여 다음 제거 작업을 준비
	
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
