#include <iostream>

using namespace std;

#define MAX 101

long long dp[MAX];
// 피보나치 수열의 값은 n이 커짐에 따라 빠르게 증가하므로, long long 자료형 사용해야 함

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int t,n;
	
	cin>>t;
	
	dp[1]=1;
	dp[2]=1;
	dp[3]=1;
	dp[4]=2;
	dp[5]=2;
	for(i=6;i<=100;i++)
		dp[i]=dp[i-1]+dp[i-5];
	
	while(t--)
	{
		cin>>n;
		cout<<dp[n]<<'\n';
	}
	
	return 0;
}
