#include <iostream>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	array<long long,81> dp={0,};
	
	dp[1]=1;
	dp[2]=1;
	
	cin>>n;
	for(int i=3;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2];
	
	long long res=dp[n]*4+dp[n-1]*2;
	
	cout<<res<<'\n';
	
	return 0;
}

/*
// 둘레를 dp 배열에 넣어 풀이
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	long long dp[81]={0,};
	
	cin>>n;
	
	dp[1]=4;
	dp[2]=6;
	
	for(int i=3;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2];
	
	cout<<dp[n]<<'\n';
	
	return 0;
}
*/
