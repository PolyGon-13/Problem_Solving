#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	map<string,bool> s;
	int n,m;
	string str;
	
	cin>>n>>m;
	
	int i;
	for(i=0;i<n;i++)
	{
		cin>>str;
		s.insert({str,true});
	}
	
	int cnt=0;
	for(i=0;i<m;i++)
	{
		cin>>str;
		if(s[str]==true)
			cnt++;
	}
	
	cout<<cnt<<'\n';
	
	return 0;
}
