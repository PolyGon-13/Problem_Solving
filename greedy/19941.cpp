#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,k,cnt=0;
	string PH;
	bool isFind=false;
	
	cin>>n>>k>>PH;
	for(int i=0;i<n;++i)
	{
		if(PH[i]!='P') continue;
		
		isFind=false;
		
		for(int j=k;j>=1;--j)
		{
			if(i-j<0) continue;
			
			if(PH[i-j]=='H') // 왼쪽으로 가장 멀리 떨어진 곳부터 탐색
			{
				++cnt;
				isFind=true;
				PH[i-j]='.';
				break;
			}
		}
		
		if(!isFind)
		{
			for(int j=1;j<=k;++j)
			{
				if(i+j>=n) break;
				
				if(PH[i+j]=='H') // 오른쪽으로 가장 적게 떨어진 곳부터 탐색
				{
					++cnt;
					PH[i+j]='.';
					break;
				}
			}
		}
	}
	cout<<cnt<<'\n';
	
	return 0;
}

/*
<++i와 i++의 성능상 차이점>
i++는 현재 값을 반환한 후 증가시킴
++i는 값을 먼저 증가시킨 후, 증가된 값을 반환함 -> 임시변수를 만들지 않기 때문에 더 효율적
이러한 작은 최적화는 컴파일러가 대부분 자동으로 처리하지만 반복 횟수가 많거나, 임시 객체 생성 비용이 중요하다면 ++i가 더 유리함
*/
