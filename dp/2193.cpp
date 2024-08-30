#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	long long dp[91];
	memset(dp,0,sizeof(dp));
	
	dp[1]=1;
	dp[2]=1;
	
	cin>>n;
	for(int i=3;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2];
	
	cout<<dp[n]<<'\n';
	
	return 0;
}
