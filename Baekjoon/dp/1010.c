#include <stdio.h>

long long com(int n,int m)
{
	int i;
	long long result=1;
	
	for(i=1;i<=n;i++)
		result=result*(m-i+1)/i;
	// nCr 조합식을 풀어서 적어보면, m!*(m-n+1)(m-n+2)***m/n!이므로 위와 같이 계산 가능
	
	return result;
}

int main()
{
    int t,n,m;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%d %d",&n,&m);
		printf("%lld\n",com(n,m));
	}
	
	return 0;
}
