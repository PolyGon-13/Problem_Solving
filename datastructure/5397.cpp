#include <iostream>
#include <list>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	string line;
	list<char> pwd;
	list<char>::iterator cur;
	
	cin>>t;
	while(t--)
	{
		cin>>line;
		pwd.clear();
		cur=pwd.begin();
		
		for(const auto& cmd:line)
		{
			if(cmd=='<')
			{
				if(distance(pwd.begin(),cur)>0)
					cur--;
			}
			else if(cmd=='>')
			{
				if(distance(cur,pwd.end())>0)
					cur++;
			}
			else if(cmd=='-')
			{
				if(cur!=pwd.begin())
					cur=pwd.erase(--cur);
			}
			else
			{
				cur=pwd.insert(cur,cmd);
				cur++;
			}
		}
		
		for(auto& x:pwd)
			cout<<x;
		cout<<'\n';
	}
	
	return 0;
}
