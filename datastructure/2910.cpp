#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

map<int,int> o;
// 전역 map으로 선언하여 cmp함수에서도 접근하고 모든 요소를 0으로 초기화해줌

bool cmp(pair<int,int>& a,pair<int,int>& b)
{
	if(a.second==b.second)
		return o[a.first]<o[b.first];
	
	return a.second>b.second;
	
	// 첫 번째 원소가 두 번째 원소보다 앞서야 하면 true 반환
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,c,x;
	map<int,int> m;
	
	cin>>n>>c;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		m[x]++;
		
		if(o[x]==0)
			o[x]=i+1;
	}
	
	vector<pair<int,int>> vec(m.begin(),m.end());
	sort(vec.begin(),vec.end(),cmp);
	
	for(auto t:vec)
	{
		for(int i=0;i<t.second;i++)
			cout<<t.first<<" ";
	}
	
	return 0;
}
