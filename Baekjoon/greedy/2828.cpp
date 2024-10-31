#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,j,p;
	
	cin>>n>>m;
	cin>>j;
	
	// 바구니의 양쪽 끝점을 각각 변수로 지정
	int left=1;
	int right=m;
	int sum=0;
	
	for(int i=0;i<j;i++)
	{
		cin>>p;
		
		if(p<left) // 바구니를 기준으로 왼쪽에서 떨어지는 경우
		{
			sum+=(left-p);
			right-=(left-p); // 기존 leff와 사과의 위치의 차이만큼 왼쪽으로 이동 
			left=p; // 왼쪽 부분은 사과가 떨어지는 지점까지 이동
		}
		else if(p>right)
		{
			sum+=(p-right);
			left+=(p-right);
			right=p;
		}
	}
	cout<<sum<<'\n';
	
	return 0;
}
