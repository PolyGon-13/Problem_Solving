#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,k;
	int cnt=0;
	scanf("%d %d",&n,&k);
	
	int *x=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	i=n-1;
	while(k>0)
	{
		if(x[i]>k)
			i--;
		else
		{
			k-=x[i];
			cnt++;
		}
	}
	printf("%d\n",cnt);
	free(x);
	
	return 0;
}
