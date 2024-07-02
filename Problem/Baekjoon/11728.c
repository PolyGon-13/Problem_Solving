#include <stdio.h>
#include <stdlib.h>

void merge(const int a[],int na,const int b[],int nb,int c[])
{
	int pa=0;
	int pb=0;
	int pc=0;
	
	while(pa<na && pb<nb)
		c[pc++]=(a[pa]<=b[pb]) ? a[pa++] : b[pb++];
	while(pa<na)
		c[pc++]=a[pa++];
	while(pb<nb)
		c[pc++]=b[pb++];
}

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
	int i;
	int n,m;
	scanf("%d %d",&n,&m);
	int *a=calloc(n,sizeof(int));
	int *b=calloc(m,sizeof(int));
	int *c=calloc(m+n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	qsort(a,n,sizeof(int),(int(*)(const void *,const void *))compare);
	qsort(b,m,sizeof(int),(int(*)(const void *,const void *))compare);
	
	merge(a,n,b,m,c);
	for(i=0;i<m+n;i++)
		printf("%d ",c[i]);
	
	return 0;
}
