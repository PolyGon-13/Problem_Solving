#include <iostream>

using namespace std;

int main()
{
	int i;
	int n;
	cin>>n;
	
	int *x=new int[n];
	for(i=0;i<n;i++)
		cin>>x[i];
	
	int cnt=0;
	while(1)
	{
		int max=x[0];
		int index=0;
		for(i=1;i<n;i++)
		{
			if(max<=x[i])
			{
				max=x[i];
				index=i;
			}
		}
		if(index!=0)
		{
			x[index]--;
			x[0]++;
			cnt++;
		}
		else
			break;
	}
	cout<<cnt<<endl;
	
	delete []x;
	
	return 0;
}

/*
// 우선순위 큐를 이용한 방법
#include <iostream>
#include <queue>

using namespace std;

int n,m;
priority_queue<int> pq; // 가장 큰 값이 top에 위치하도록 설정하는 큐

int main()
{
	int i;
	int a,top;
	int ans=0;
	
	cin>>n;
	cin>>m; // 기호 1번 득표를 먼저 입력받음
	for(i=0;i<n-1;i++)
	{
		cin>>a;
		pq.push(a); // 다른 사람들의 득표수를 입력받고 priority_queue에 푸시
	}
	
	while(!pq.empty())
	{
		top=pq.top(); // top의 값(가장 큰 값)
		pq.pop();
		
		if(top<m) // top보다 1번 득표수가 많으면 문제조건 충족
			break;
		else
		{
			pq.push(top-1); // 기존의 top에서 득표수 1을 뺀 값을 다시 priority_queue에 푸시
			m++; // 뺏은 득표수를 1번 후보에게 추가
			ans++;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
*/
