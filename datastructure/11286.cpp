#include <iostream>
#include <queue>
#include <cmath>
#include <vector>

using namespace std;

struct cmp
{
	bool operator()(int a,int b)
	{
		if(abs(a)==abs(b))
			return a>b; // 절댓값이 같은 경우 작은 원소가 top으로 가도록 함
		return abs(a)>abs(b);
	}
};
// 자신이 직접 우선순위를 정할 때는 구조체를 생성해야 함
// true를 반환하면 swap 하겠다는 의미이므로 위와 같은 경우는 절댓값에 의한 내림차순 정렬을 함

int main() 
{	
	int i;
	int n,x;
	cin>>n;
	
	priority_queue<int,vector<int>,cmp> pq;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		
		if(x==0)
		{
			if(pq.empty())
				cout<<0<<'\n';
			else
			{
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
		else
			pq.push(x);
	}
	
	return 0;
}
