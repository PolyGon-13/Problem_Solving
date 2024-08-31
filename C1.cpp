#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,h;
	cin>>n>>h;
	
	vector<int> height(n);
	for(int i=0;i<n;i++)
		cin>>height[i];
	
	vector<int> dp(h+1,0);
	dp[0]=1;
	
	for(int i=1;i<=h;i++)
	{
		for(int j:height)
		{
			if(i>=j)
				dp[i]=(dp[i]+dp[i-j])%MOD;
		}
	}
	cout<<dp[h]<<'\n';
	
	return 0;
}
// 중앙대. 컵 쌓기
