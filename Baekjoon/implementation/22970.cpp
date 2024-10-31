#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x;
	int tmp=1,ans=0;
	vector<int> v;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	
	if(n==1)
	{
		cout<<"1\n";
		return 0;
	}
	for(int i=1;i<n;i++)
	{
		if(v[i-1]>v[i] && v[i+1]>v[i])
		// 산이 끝나는 지점
		{
			ans=max(ans,tmp+1);
			tmp=1; // 새로운 산을 카운트하기 위해 tmp 초기화 후 continue
			continue;
		}
		else if(v[i-1]<v[i] && v[i+1]<v[i])
		// 산 꼭대기 지점
			tmp++;
		else if(v[i-1]<v[i] || v[i-1]>v[i])
		// 산의 높이가 증가하거나 감소하는 지점
			tmp++;
		else if(v[i-1]==v[i])
		// 산의 높이가 같으면 산도 끝남
			tmp=1; // 산이 끝났으므로 tmp 초기화
		
		ans=max(ans,tmp); // 매 반복마다 가장 큰 카운트를 ans에 저장
	}
	cout<<ans<<'\n';
	
	return 0;
}
