// 11279번 문제에서 우선순위 큐 선언만 오름차순으로 바꾸면 해결
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() 
{	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i;
	int n,x;
	cin>>n;
	
	priority_queue<int,vector<int>,greater<int>> pq;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		
		if(x!=0)
			pq.push(x);
		else
		{
			if(pq.empty())
				cout<<0<<'\n';
			else
			{
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
	}
	
	return 0;
}
