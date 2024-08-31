#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

bool cmp(pair<string,int>& a,pair<string,int>& b)
{
	if(a.second==b.second)
	{
		if(a.first.length()==b.first.length())
			return a.first<b.first;
		return a.first.length()>b.first.length();
	}
	return a.second>b.second;
}

unordered_map<string,int> map;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	string word;
	
	cin>>n>>m;
	while(n--)
	{
		cin>>word;
		if(word.length()>=m)
			map[word]++;
	}
	
	vector<pair<string,int>> vec(map.begin(),map.end());
	sort(vec.begin(),vec.end(),cmp);
	
	for(auto i:vec)
		cout<<i.first<<'\n';
	
	return 0;
}
