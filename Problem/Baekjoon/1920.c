
// 이중 for문을 이용하여 해결하려고 했지만 시간초과
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
