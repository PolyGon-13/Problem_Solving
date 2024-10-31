#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	stack<char> p;
	string cmd;
	int cnt=0;
	
	cin>>cmd;
	for(int i=0;i<cmd.length();i++)
	{
		if(cmd[i]=='(')
			p.push(cmd[i]);
		else if(cmd[i]==')' && cmd[i-1]=='(')
		{
			p.pop();
			cnt+=p.size();
		}
		else
		{
			cnt++;
			p.pop();
		}
	}
	cout<<cnt<<'\n';
	
	return 0;
}
