#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int n;
	long long x;
	cin>>n;
	
	multiset<int> s;
	for(i=0;i<n;i++)
	{
		cin>>x;
		s.insert(x);
	}
	
	for(auto it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	cout<<'\n';
	
	return 0;
}
