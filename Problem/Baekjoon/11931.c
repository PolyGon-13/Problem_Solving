#include <stdio.h>
#include <stdlib.h>

int compare(const int *a,const int *b)
{
	if(*a>*b)
		return -1;
	else if(*a<*b)
		return 1;
	else
		return 0;
}

int main()
{
	int i;
	int n;
	scanf("%d",&n);
	
	int *x=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	qsort(x,n,sizeof(int),(int(*)(const void *,const void *))compare);
	
	for(i=0;i<n;i++)
		printf("%d\n",x[i]);
	
	free(x);
	
	return 0;
}
