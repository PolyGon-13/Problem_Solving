#include <iostream>
#include <algorithm> // min 함수

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,ans;
	
	cin>>n>>m;
	if(n==1)
		ans=1; // 세로가 1이면 움직일 수 없음
	else if(n==2)
		ans=min(4,(m+1)/2); 
	// m>=7이면 2,3번 동작 3번 반복으로 ans=4
	// m<7이면 m==1,2이면 ans=1, m==3,4면 ans=2, m==5,6이면 ans=3임 => 식으로 나타내면 (m+1)/2
	else // n>=3
	{
		// 1,4번 동작을 최대한 많이 사용해서 많은 칸을 방문해야함
		// 횟수가 5번 이상이면 모든 동작을 사용해야 하므로 2,3번 동작을 1번만 사용
		// m==7일때 모든 동작을 1번씩 사용할 수 있음
		
		if(m<7) // m<7이면 모든 동작을 반복할 수 없으므로 횟수를 4 이하로 설정해야함
			ans=min(4,m); 
		// 1,4번 동작만 최대한 사용하고 남은 칸은 버리는게 ans의 값이 더 큼
		else
			ans=m-2; 
		// m==7 이면 ans=5이고 그 이후부터는 1번과 4번 동작 반복하므로 ans=5+(m-7)
	}
	cout<<ans<<'\n';
	
	return 0;
}
