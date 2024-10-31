#include <stdio.h>

int x[100000]={0,};

int main()
{
	int i;
	int n,m;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		x[m]++;
	}
	
	for(i=n;i>=0;i--)
		if(x[i]==i)
		{
			printf("%d\n",i);
			return 0; // return 함수가 호출되면 해당 함수가 종료됨
		}
	printf("-1\n");
	
	return 0;
}
