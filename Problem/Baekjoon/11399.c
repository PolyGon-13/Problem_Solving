#include <stdio.h>
#include <stdlib.h>

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
	int i,j;
	int n;
	scanf("%d",&n);
	int *p=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	
	qsort(p,n,sizeof(int),(int(*)(const void *,const void *))compare);
	
	int sum1=0,sum2=0;
	for(i=0;i<n;i++)
	{
		sum2=0;
		for(j=0;j<=i;j++)
			sum2+=p[j];
		sum1+=sum2;
	}
	printf("%d\n",sum1);
	
	return 0;
}
