#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int n,k;
	int cnt=0;
	scanf("%d %d",&n,&k);
	
	int *arr=calloc(n+1,sizeof(int));
	for(i=1;i<=n;i++)
		arr[i]=i;
	
	int f_k=k%10;
	int f_2k=(2*k)%10;
	
	for(i=1;i<=n;i++)
		if(f_k==(arr[i]%10) || f_2k==(arr[i]%10))
			arr[i]=0;
	
	for(i=1;i<=n;i++)
		if(arr[i]!=0)
			cnt++;
	printf("%d\n",cnt);
	
	for(i=1;i<=n;i++)
		if(arr[i]!=0)
			printf("%d ",arr[i]);
	putchar('\n');
	
	free(arr);
	
	return 0;
}
