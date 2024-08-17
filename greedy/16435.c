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

int main()
{
	int i;
	int n,l;
	scanf("%d %d",&n,&l);
	
	int *fruit=calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&fruit[i]);
	
	qsort(fruit,n,sizeof(fruit[0]),(int(*)(const void *,const void *))compare);
	
	for(i=0;i<n;i++)
	{
		if(l>=fruit[i])
			l++;
		else
			break;
	}
	printf("%d\n",l);
	
	free(fruit);
	
	return 0;
}
