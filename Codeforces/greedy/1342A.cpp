#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	ll x,y,a,b;
	
	cin>>t;
	while(t--)
	{
		ll ans1=0,ans2=0;

		cin>>x>>y;
		cin>>a>>b;
		
		if(x<y)
			swap(x,y);
		
		ans1=x*a+y*a;
		ans2=(y-x)*a+x*b;
		
		cout<<min(ans1,ans2)<<'\n';
	}
	
	return 0;
}
