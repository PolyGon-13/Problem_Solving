#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b)
{
	return (*(int*)a-*(int*)b);
	// qsort의 비교함수의 비교식에는 다양한 표현들이 들어갈 수 있는 듯
	// if문으로 단순비교, 삼항연산자를 이용한 비교, 값을 빼서 양수/음수/0에 따른 값 return 등
}

int bin_search(int a[],int key, int n)
{
	int start=0;
	int rear=n;
	int center;
	
	while(start<rear)
	{
		center=(start+rear)/2;
		a[center]>key ? rear=center : (start=center+1);
		// key보다 요소의 값이 크면 rear를 center로 옮김
		// key보다 요소의 값이 작거나 같으면 start를 center+1로 옮김
		// key값과 요소가 같다면 검색범위를 왼쪽에서부터 줄여서 index가 가장 큰 key값이 검색되게 함
	}
	int temp=rear; // rear의 값은 최종 index보다 1 큼
	
	start=0;
	rear=n;
	while(start<rear)
	{
		center=(start+rear)/2;
		a[center]>=key ? rear=center : (start=center+1);
		// key보다 요소의 값이 크거나 같으면 rear를 center로 옮김
		// key보다 요소의 값이 작으면 start를 center+1로 옮김
	}
	// rear의 값은 최소 index의 값
	
	return temp-rear;
}
// 단순한 이진검색 알고리즘이 아닌 upper bound, lower bound 이진검색 알고리즘을 이용

int main()
{
	int i;
	int n,m,k;
	
	scanf("%d",&n);
	int *x=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	qsort(x,n,sizeof(x[0]),compare);
	
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&k);
		printf("%d ",bin_search(x,k,n));
	}
	putchar('\n');
	
	free(x);
	
	return 0;
}
