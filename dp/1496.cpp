#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int dp[100001];
	memset(dp,-1,sizeof(dp));
	
	cin>>n;
	
	dp[1]=-1;
	dp[2]=1;
	dp[3]=-1;
	dp[4]=2;
	dp[5]=1;
	dp[6]=3;
	dp[7]=2;
	dp[8]=4;
	for(int i=9;i<=n;i++)
		dp[i]=dp[i-5]+1;
	
	cout<<dp[n]<<'\n';
	
	return 0;
}
