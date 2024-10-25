#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const pair<int,int>& a,const pair<int,int>& b)
{
	if(a.second==b.second)
		return a.first<b.first;
	return a.second<b.second;
	// false를 반환하면 교체, true면 그대로 둠
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b;
	
	cin>>n;
	vector<pair<int,int>> m(n);
	for(int i=0;i<n;++i)
	{
		cin>>a>>b;
		m[i]={a,b};
	}
	
	sort(m.begin(),m.end(),comp);
	
	int cnt=0;
	int end_last_time=0;
	for(int i=0;i<n;++i)
	{
		if(m[i].first>=end_last_time)
		{
			++cnt;
			end_last_time=m[i].second;
		}
	}
	cout<<cnt<<'\n';
	
	return 0;
}
