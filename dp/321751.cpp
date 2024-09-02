#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD=1000000007;

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
	dp[0]=1; // 높이 0을 만드는 경우의 수
	
	for(int i=1;i<=h;i++)
	{
		for(int j:height)
		{
			if(i>=j) // i는 목표 높이, j는 컵의 높이이므로 i가 j보다 더 커야함
				dp[i]=(dp[i]+dp[i-j])%MOD;
				// 높이 i-1의 경우를 알고 있다면 해당 경우에 높이 1을 추가하여 높이 4의 경우의 수를 구할 수 있음
		}
	}
	cout<<dp[h]<<'\n';
	
	return 0;
}
