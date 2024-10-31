#include <stdio.h>
#include <stdlib.h>

int bin_search(int a[],int key,int size)
{
	int front=0;
	int rear=size-1;
	
	do
	{
		int center=(front+rear)/2;
		if(a[center]==key)
			return 1;
		else if(a[center]<key)
			front=center+1;
		else
			rear=center-1;
	} while(front<=rear);
	return 0;
}

int compare(const void *a,const void *b)
{
	return *(int*)a>*(int*)b ? 1 : (*(int*)a<*(int*)b ? -1 : 0);
	// 삼항 연산자를 중첩하여 a가 b보다 크면 1, 작으면 -1, 같으면 0을 반환하도록 함
}

int main()
{
	int i;
	int n,m;
	
	scanf("%d",&n);
	int *arr1=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);
	
	scanf("%d",&m);
	int *arr2=malloc(m*sizeof(int));
	for(i=0;i<m;i++)
		scanf("%d",&arr2[i]);
	
	qsort(arr1,n,sizeof(int),compare);
	
	for(i=0;i<m;i++)
		printf("%d\n",bin_search(arr1,arr2[i],n));
	
	free(arr1);
	free(arr2);
	
	return 0;
}

// 이중 for문을 이용하여 해결하려고 했지만 시간초과 -> 위 코드처럼 이진탐색을 이용하여 해결
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	int n,m;
	
	scanf("%d",&n);
	int *arr1=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);
	
	scanf("%d",&m);
	int *arr2=malloc(m*sizeof(int));
	for(i=0;i<m;i++)
		scanf("%d",&arr2[i]);
	
	int tr;
	for(i=0;i<m;i++)
	{
		tr=0;
		for(j=0;j<n;j++)
		{
			if(arr1[j]==arr2[i])
			{
				puts("1");
				tr=1;
			}
		}
		if(!tr)
			puts("0");
	}
	
	free(arr1);
	free(arr2);
	
	return 0;
}
*/
