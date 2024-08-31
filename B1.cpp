#include <iostream>

using namespace std;

long long dp[100001];
int arr[1000000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	dp[0]=0;
	arr[0]=1;
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if((dp[i-1]-i)<0 || arr[dp[i-1]-i]==1)
		{
			dp[i]=dp[i-1]+i;
			arr[dp[i]]=1;
		}
		else
		{
			dp[i]=dp[i-1]-i;
			arr[dp[i]]=1;
		}
	}
	cout<<dp[n]<<'\n';
	
	return 0;
}
// 중앙대. 현권이와 신기한 수열
