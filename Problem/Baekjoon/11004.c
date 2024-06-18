#include <stdio.h>
#include <stdlib.h>

int compare(const int* a,const int* b)
{
	if(*a<*b)
		return -1;
	else if(*a>*b)
		return 1;
	else
		return 0;
}

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	
	int i;
	int* arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	qsort(arr,n,sizeof(int),(int(*)(const void*,const void*))compare); // 퀵 정렬
  // qsort(배열, 배열요소의 개수, 배열 요소의 크기, 비교함수)
  // 비교함수는 a와 b를 비교하였을 때, a가 더 크면 양수를, b가 더 크면 음수를, 같으면 0을 반환하는 함수여야 한다.
	printf("%d\n",arr[k-1]);

	free(arr);
	
	return 0;
}

// 처음에는 버블정렬을 이용하여 코드를 작성하였지만 시간초과
/*
#include <stdio.h>
#include <stdlib.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;} while(0)

void bubble(int a[],int n)
{
	int j;
	int k=0;
	while(k<n-1)
	{
		int last=n-1;
		for(j=n-1;j>k;j--)
			if(a[j-1]>a[j])
			{
				swap(int,a[j-1],a[j]);
				last=j;
			}
		k=last;
	}
}

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	
	int i;
	int* arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	bubble(arr,n);
	printf("%d\n",arr[k-1]);

	free(arr);
 
	return 0;
}
*/
