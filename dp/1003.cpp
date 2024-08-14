#include <iostream>

using namespace std;

int main()
{
	int i;
	int t,n;
	int dp[41]={0,1,1};
	
	for(i=3;i<41;i++)
		dp[i]=dp[i-1]+dp[i-2];
	
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		
		if(n==0)
			cout<<1<<' '<<0<<endl;
		else if(n==1)
			cout<<0<<' '<<1<<endl;
		else
			cout<<dp[n-1]<<' '<<dp[n]<<endl;
	}
	
	return 0;
}
