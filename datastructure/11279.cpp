#include <iostream>
#include <queue>

using namespace std;

int main() 
{	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	// C++에서 입력과 출력을 빠르게 해주는 코드 (이거 사용하니 시간초과가 없어짐...)
	
	int i;
	int n,x;
	cin>>n;
	
	priority_queue<int> pq;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		
		if(x!=0)
			pq.push(x);
		else
		{
			if(pq.empty())
				cout<<0<<'\n'; // 개행문자 사용도 실행시간 단축에 기여함
			else
			{
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
	}
	
	return 0;
}

/*
// 추가적인 vector를 선언하여 출력할 수들을 저장한 후 한 번에 출력하는 방식
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() 
{	
	int i;
	int n,x;
	cin>>n;
	
	vector<int> result;
	priority_queue<int> pq;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		
		if(x!=0)
			pq.push(x);
		else
		{
			if(pq.empty())
				result.push_back(0);
			else
			{
				result.push_back(pq.top());
				pq.pop();
			}
		}
	}
	
	for(i=0;i<result.size();i++)
		cout<<result[i]<<'\n';
	// endl말고 '\n'으로 바꾸니 시간초과에서 정답으로 바뀜...
	
	return 0;
}
*/
