#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	long long x;
	map<long long,int> c;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		c[x]++;
	}
	
	long long ans,max=0;
	map<long long,int>::iterator i;
	for(i=c.begin();i!=c.end();i++)
	{
		if(i->second>max)
		{
			ans=i->first;
			max=i->second;
		}
		else if(i->second==max)
		{
			if(ans>i->first)
				ans=i->first;
		}
	}
	cout<<ans<<'\n';
	
	return 0;
}

/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	long long tmp;
	vector<long long> v;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		v.push_back(tmp);
	}
	
	sort(v.begin(),v.end());
	
	int max=0;
	int cnt=0;
	long long res=v[0];
	for(int i=1;i<n;i++)
	{
		if(v[i]==v[i-1])
		{
			cnt++;
			if(cnt>max)
			{
				max=cnt;
				res=v[i];
			}
		}
		else
			cnt=0;
	}
	cout<<res<<'\n';
	
	return 0;
}
*/
