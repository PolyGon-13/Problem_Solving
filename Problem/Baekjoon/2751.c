#include <stdio.h>
#include <stdlib.h>

int num[1000000];

int compare(const void *a, const void *b) // 퀵정렬 함수 정리 
{
	int num1=*(int *)a;
	int num2=*(int *)b;
	
	if(num1<num2) return -1;
	if(num1>num2) return 1;
	if(num1==num2) return 0;
}

int main()
{
	int n;
	int i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	
	qsort(num,n,sizeof(int),compare); // (정렬할 배열, 요소개수, 요소크기, 비교함수) 
	
	puts("");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}
