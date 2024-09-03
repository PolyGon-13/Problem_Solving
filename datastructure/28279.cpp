#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	deque<int> dq;
	
	int n,cmd,x;
	
	cin>>n;
	while(n--)
	{
		cin>>cmd;
		
		if(cmd==1)
		{
			cin>>x;
			dq.push_front(x);
		}
		else if(cmd==2)
		{
			cin>>x;
			dq.push_back(x);
		}
		else if(cmd==3)
		{
			if(!dq.empty())
			{
				cout<<dq.front()<<'\n';
				dq.pop_front();
			}
			else
				cout<<"-1\n";
		}
		else if(cmd==4)
		{
			if(!dq.empty())
			{
				cout<<dq.back()<<'\n';
				dq.pop_back();
			}
			else
				cout<<"-1\n";
		}
		else if(cmd==5)
			cout<<dq.size()<<'\n';
		else if(cmd==6)
			cout<<(dq.empty()?"1\n":"0\n");
		else if(cmd==7)
			cout<<(!dq.empty()?dq.front():-1)<<'\n';
		else if(cmd==8)
			cout<<(!dq.empty()?dq.back():-1)<<'\n';
	}
	
	return 0;
}
