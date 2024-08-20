#include <iostream>

using namespace std;

#define MAX 301

int step[MAX];
int dp[MAX];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int n;
	
	cin>>n;
	
	for(i=1;i<=n;i++)
		cin>>step[i];
	
	dp[1]=step[1];
	dp[2]=step[1]+step[2];
	
	int a=step[1]+step[3];
	int b=step[2]+step[3];
	dp[3]=(a>b)?a:b;
		
	for(i=4;i<=n;i++)
	{
		int temp1=dp[i-2]+step[i];
		int temp2=dp[i-3]+step[i-1]+step[i];
		dp[i]=(temp1>temp2)?temp1:temp2;
	}
	cout<<dp[n]<<'\n';
	
	return 0;
}
