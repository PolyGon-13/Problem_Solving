#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int i;
	int n,b,c;
	long long cnt=0;

	scanf("%d",&n);

	int* a=(int*)malloc(sizeof(int)*n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	scanf("%d %d",&b,&c);

	for(i=0;i<n;i++) 
	{
		cnt+=1;
		a[i]-=b;
        
		if(a[i]>0)
			cnt+=ceil(a[i]*1.0/c);
	}
	printf("%lld",cnt);

	free(a);

	return 0;
}
