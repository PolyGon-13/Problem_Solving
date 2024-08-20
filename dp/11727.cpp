#include <iostream>

using namespace std;

#define MAX 1001

int dp[MAX];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int n;
	
	cin>>n;
	
	dp[1]=1;
	dp[2]=3;
	for(i=3;i<=n;i++)
		dp[i]=(dp[i-1]+2*dp[i-2])%10007;
	
	cout<<dp[n]<<'\n';
	
	return 0;
}
