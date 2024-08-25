#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	char cmd,x;
	int m;
	
	cin>>s>>m;
	list<char> str(s.begin(),s.end());
	auto cur=str.end();
	
	while(m--)
	{
		cin>>cmd;
		
		if(cmd=='L')
		{
			if(cur!=str.begin())
				cur--;
		}
		else if(cmd=='D')
		{
			if(cur!=str.end())
				cur++;
		}
		else if(cmd=='B')
		{
			if(cur!=str.begin())
				cur=str.erase(--cur);
		}
		else if(cmd=='P')
		{
			cin>>x;
			cur=str.insert(cur,x);
			cur++;
		}
	}
	
	for(auto& i:str)
		cout<<i;
	cout<<'\n';
	
	return 0;
}
