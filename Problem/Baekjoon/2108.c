#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *first,const void *second)
{
	int *a=(int*)first;
	int *b=(int*)second;
	
	if(*a<*b)
		return -1;
	else if(*a>*b)
		return 1;
	else
		return 0;
}

int arith(int list[],int n)
{
	int i;
	double sum=0;
	
	for(i=0;i<n;i++)
		sum+=list[i];
	
	return round(sum/n);
	// ceil(double_X) : 올림
	// round(double_X) : 반올림
	// floor(double_X) : 내림
}

int median(int list[],int n)
{
	if(n==1)
		return list[0];
	else
		return list[(n+1)/2-1];
}

int mode(int list[],int n)
{
	int ar[8001]={0,};
	int i,idx;
	int max=0;
	int cnt=0;
	
	for(i=0;i<n;i++)
	{
		idx=list[i]+4000;
		ar[idx]+=1;
		
		if(ar[idx]>max)
			max=ar[idx];
	}
	
	for(i=0,idx=0;i<8001;i++)
	{
		if(ar[i]==0)
			continue;
		if(ar[i]==max)
		{
			if(cnt==0)
			{
				idx=i;
				cnt+=1;
			}
			else if(cnt==1)
			{
				idx=i;
				break;
			}
		}
	}
	
	return idx-4000;
}

int range(int list[],int n)
{
	return list[n-1]-list[0];
}


int main()
{
	int i,n;
	int *list;
	scanf("%d",&n);
	list=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
		scanf("%d",&list[i]);
	
	qsort(list,n,sizeof(list[0]),compare);
	
	printf("%d\n",arith(list,n));
	printf("%d\n",median(list,n));
	printf("%d\n",mode(list,n));
	printf("%d\n",range(list,n));
	
	return 0;
}
