#include <iostream>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	deque<pair<int,int>> dq;
	int n,x,num;
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		dq.push_back({i,x});
	}
	
	while(!dq.empty())
	{
		auto cur=dq.front();
		cout<<cur.first<<" ";
		num=cur.second;
		dq.pop_front();
		
		if(num>0)
		{
			num--;
			while(num!=0)
			{
				dq.push_back(dq.front());
				dq.pop_front();
				num--;
			} // num에 해당하는 값이 front에 올 때까지 앞의 원소들을 back으로 push
		}
		else
		{
			while(num!=0)
			{
				dq.push_front(dq.back());
				dq.pop_back();
				num++;
			}
		}
	}
	cout<<'\n';
	
	return 0;
}
