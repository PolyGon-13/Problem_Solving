#include <stdio.h>
#include <stdlib.h>

int compare(const int *a,const int *b)
{
	if(*a>*b)
		return 1;
	else if(*a<*b)
		return -1;
	else
		return 0;
}

int bin_search(const int a[],int key, int n)
{
	int front=0;
	int rear=n-1;
	int center;
	
	while(front<=rear)
	{
		center=(front+rear)/2;
		if(a[center]==key)
			return 1;
		else if(a[center]<key)
			front=center+1;
		else
			rear=center-1;
	}
	return 0;
}

int main()
{
	int i;
	int n,m,k;
	scanf("%d",&n);
	int *x=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	qsort(x,n,sizeof(int),(int(*)(const void *,const void *))compare);
	
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&k);
		printf("%d ",bin_search(x,k,n));
	}
	
	return 0;
}
// 자료구조, 정렬, 이분 탐색
