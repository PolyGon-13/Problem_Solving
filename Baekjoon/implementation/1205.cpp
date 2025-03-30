#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,p;
	long long new_s;
	long long s;
	
	cin>>n>>new_s>>p;
	
	if(n==0)
	{
		cout<<1<<endl;
		return 0;
	}
	
	long long fir=0;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		
		if(new_s>s) // 태수 점수가 더 높은 경우
		{
			if(fir==0) // 태수 점수가 리스트에 없는 경우
			{
				cout<<i<<endl; // 현재 지점의 위치번호 출력
				return 0;
			}
			else // 태수 점수와 같은 경우 이후의 경우(그 다음 작은 값)
			{
				cout<<fir<<endl; // 이전에 기억한 등수 출력
				return 0;
			}
		}
		
		if(new_s==s) // 태수 점수와 해당 위치 점수가 동일한 경우
		{
			if(fir==0) // fir이 업데이트 되지 않았다면 해당 위치 기억
				fir=i;
			// 그 다음 값도 동일한 값이면 이전 위치를 기억한채로 패스
		}
		
		if(i>=p) // 등수컷을 지나가버린 경우
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	
	if(fir!=0) // 마지막 값이 태수 값과 동일하여 return 되지 않고 for문을 탈출한 경우
	{
		cout<<fir<<endl;
		return 0;
	}
	
	cout<<n+1<<endl;
	// fir이 0인 경우는 태수와 같은 점수가 없는 경우 + 점수컷만큼 점수가 주어지지 않은 경우
	return 0;
}
