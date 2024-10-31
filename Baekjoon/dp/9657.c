#include <stdio.h>

int dp[1005];

int main()
{
	int i;
	int n;
	scanf("%d",&n);
	
	dp[1]=1;
	dp[2]=0;
	dp[3]=1;
	dp[4]=1;
	dp[5]=1;
	
	for(i=6;i<=n;i++)
	{
		if(dp[i-1]==0 || dp[i-3]==0 || dp[i-4]==0)
			dp[i]=1;
		else
			dp[i]=0;
	}
	// dp[n]을 n번째 돌을 가져가는 사람의 이름이라고 생각해보면 (1 : 상근, 0 : 창영)
	// n번째 돌이 가져가는 첫 번째 돌인 경우 : dp[n-1]
	// n번째 돌이 가져가는 세 번째 돌인 경우 : dp[n-3]
	// n번째 돌이 가져가는 네 번째 돌인 경우 : dp[n-4]
	// 이 게임은 항상 상근이가 먼저 시작하므로, dp[n-1], dp[n-3], dp[n-4] 모두 1인 경우(상근)에만 창영이가 이길 수 있음
		
	if(dp[n]==1)
		puts("SK\n");
	else
		puts("CY\n");
	
	return 0;
}
