#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	vector<int> pos(n,0);
	
	for(int i=0;i<n;++i)
		cin>>pos[i];
	
	sort(pos.begin(),pos.end());
	
	// 중앙값 출력
	cout<<pos[(n-1)/2]<<'\n';
	
	return 0;
}

/*
// 수학적으로는 문제 없지만 모든 위치에서 다른 집까지의 거리를 계산하기 때문에 시간 복잡도가 O(n^2)로 커짐
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	vector<int> pos(n,0);
	vector<int> sum(n,0);
	
	for(int i=0;i<n;++i)
		cin>>pos[i];
	
	sort(pos.begin(),pos.end());
	
	for(int i=0;i<n;++i)
	{
		for(int j=1;j<n;++j)
			sum[i]+=abs(pos[i]-pos[(i+j)%n]);
	}
	
	int min_idx;
	int min_sum=sum[0];
	for(int i=1;i<n;i++)
	{
		if(min_sum>sum[i])
		{
			min_sum=sum[i];
			min_idx=i;
		}
	}
	cout<<pos[min_idx]<<'\n';
	
	return 0;
}
*/
