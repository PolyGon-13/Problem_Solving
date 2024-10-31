#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,n,x;
	
	cin>>t;
	while(t--)
	{
		int sum=0;
		
		cin>>n;
		for(int i=0;i<n;++i)
		{
			cin>>x;
			sum+=x;
		}
		
		if(sum%2==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}
