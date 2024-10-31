#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int cnt=0;
	string str;
	
	
	cin>>n;
	while(n--)
	{
		cin>>str;
		stack<char> s;
		
		for(int i=0;i<str.length();i++)
		{
			if(!s.empty() && s.top()==str[i])
			{
				s.pop();
				continue;
			}
			s.push(str[i]);
		}
		
		if(s.empty())
			cnt++;
	}
	cout<<cnt<<'\n';
	
	return 0;
}
