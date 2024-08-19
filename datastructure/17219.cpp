#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	map<string,string> data;
	int n,m;
	string site,pwd;
	
	cin>>n>>m;
	
	int i;
	for(i=0;i<n;i++)
	{
		cin>>site>>pwd;
		data.insert({site,pwd});
	}
	
	for(i=0;i<m;i++)
	{
		cin>>site;
		cout<<data[site]<<'\n';
	}
	
	return 0;
}
