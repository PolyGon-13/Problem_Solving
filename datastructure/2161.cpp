#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	queue<int> c;
	
	cin>>n;
	for(int i=1;i<=n;i++)
		c.push(i);
	
	while(!c.empty())
	{
		cout<<c.front()<<" ";
		c.pop();
		c.push(c.front());
		c.pop();
	}
	cout<<'\n';
	
	return 0;
}
