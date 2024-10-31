#include <iostream>
#include <queue>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  // 위 두 문장이 있으면 ide 환경에서는 아래의 if문에 대한 출력이 즉각적으로 이루어지는 것이 아닌 입력을 모두 받고 출력을 한 번에 함
  // front를 입력해도 바로 출력되는 것이 아니라 front back back을 입력했다면 모든 cmd를 받은 후 한 번에 값들을 출력함
	
	queue<int> q;
	
	int n;
	cin>>n;
	
	int x;
	string cmd;
	while(n--)
	{
		cin>>cmd;
		
		if(!cmd.compare("push"))
		{
			cin>>x;
			q.push(x);
		}
		else if(!cmd.compare("pop"))
		{
			if(!q.empty())
			{
				cout<<q.front()<<'\n';
				q.pop();
			}
			else
				cout<<"-1"<<'\n';
		}
		else if(!cmd.compare("size"))
			cout<<q.size()<<'\n';
		else if(!cmd.compare("empty"))
			cout<<q.empty()<<'\n';
		else if(!cmd.compare("front"))
		{
			if(!q.empty())
				cout<<q.front()<<'\n';
			else
				cout<<"-1"<<'\n';
		}
		else if(!cmd.compare("back"))
		{
			if(!q.empty())
				cout<<q.back()<<'\n';
			else
				cout<<"-1"<<'\n';
		}
	}
	
	return 0;
}
