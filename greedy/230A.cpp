#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int s,n,x,y;
	
	cin>>s>>n;
	vector<pair<int,int>> st(n);
	for(int i=0;i<n;++i)
	{
		cin>>x>>y;
		st[i]={x,y};
	}
	
	sort(st.begin(),st.end());
	
	for(const auto& i:st)
	{
		if(s>i.first)
			s+=i.second;
		else
		{
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	
	return 0;
}
