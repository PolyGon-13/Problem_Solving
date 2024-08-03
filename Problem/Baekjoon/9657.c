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
  
	
	if(dp[n]==1)
		puts("SK\n");
	else
		puts("CY\n");
	
	return 0;
}
