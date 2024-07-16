#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const int *a,const int *b)
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
	int i,n;
	double sum=0;
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("0\n");
		return 0;
	}
	
	int *x=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	qsort(x,n,sizeof(int),(int(*)(const void *,const void *))compare);
	
	int cut=round(n*0.15);
	int total=n-2*cut;
	
	for(i=cut;i<n-cut;i++)
		sum+=x[i];
	
	int ave=round(sum/total);
	printf("%d\n",ave);
	
	free(x);
	
	return 0;
}
// 절사평균 : 요소들 중 가장 큰 값과 가장 작은 값을 제외한 수들로 평균을 구한 값
