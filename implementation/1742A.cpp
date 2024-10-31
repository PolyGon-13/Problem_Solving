#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,a,b,c;
	
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		
		if(a+b==c || b+c==a || a+c==b)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}
