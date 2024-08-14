#include <stdio.h>
#include <stdlib.h>

/*
void Bubblesort(int b[],int n)
{
	int i,j;
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]<b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
}
*/

int compare(const int *a,const int *b)
{
	if(*a>*b)
		return -1;
	else if(*a<*b)
		return 1;
	else
		return 0;
}

/*
void Bubble(int a[],int n)
{
	int i,j;
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
*/

int compare_2(const int *a,const int *b)
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
	int a[50];
	int b[50];
	int n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	
	qsort(a,n,sizeof(int),(int(*)(const void *,const void *))compare_2);
	qsort(b,n,sizeof(int),(int(*)(const void *,const void *))compare);
	
	/*
	Bubble(a,n);
	Bubblesort(b,n);
	*/
	
	int sum=0;
	int result[50];
	for(i=0;i<n;i++)
	{
		result[i]=a[i]*b[i];
		sum=sum+result[i];
	}
	printf("%d\n",sum);
	
	return 0;
}
// a는 오름차순, b는 내림차순으로 정렬해서 큰 수는 작은 수와, 작은 수가 큰 수와 곱해지게 하여 최솟값을 도출
