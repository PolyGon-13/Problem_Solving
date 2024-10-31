#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq;
	int idx;
	int res=0;
	
	int i;
	int n,m,x;
	cin>>n>>m;
	
	for(i=1;i<=n;i++)
		dq.push_back(i); // 덱의 뒤에서부터 요소들을 넣어 오름차순으로 덱 정렬
	
	while(m--)
	{
		cin>>x;
		
		for(i=0;i<dq.size();i++)
		{
			if(dq[i]==x)
			{
				idx=i;
				break;
			}
		}
		// 덱의 모든 요소를 탐색하여 목표 인덱스 찾기
		
		if(idx<=dq.size()/2) // 덱의 크기의 절반보다 작은 경우 (목표 인덱스가 앞쪽에 있는 경우)
		{
			while(1)
			{
				if(dq.front()==x) // 앞쪽 요소가 목푯값인 경우
				{
					dq.pop_front(); // 팝하고 반복 종료
					break;
				} 
				// 목푯값이 아닌 경우
				++res; // 2번 연산을 수행해야하므로 카운트업
				dq.push_back(dq.front()); // 앞쪽 요소를 뒤쪽으로 푸시
				dq.pop_front(); // 앞쪽 요소를 팝
			}
		}
		else // 덱의 크기의 절반보다 큰 경우 (목표 인덱스가 뒤쪽에 있는 경우)
		{
			while(1)
			{
				if(dq.front()==x)
				{
					dq.pop_front();
					break;
				}
				++res; // 3번 연산을 수행해야하므로 카운트업
				dq.push_front(dq.back()); // 뒤쪽 요소를 앞쪽으로 푸시
				dq.pop_back(); // 뒤쪽 요소를 팝
			}
		}
	}
	cout<<res<<endl;
	
	return 0;
}
