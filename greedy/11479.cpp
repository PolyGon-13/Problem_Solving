#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,n;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> log(n);
		vector<int> res(n);
		for(int i=0;i<n;++i)
			cin>>log[i];
		
		sort(log.begin(),log.end());
		
		int left=0;
		int right=log.size()-1;
		for(int i=0;i<n;++i)
		{
			if(i%2==0)
			{
				res[left]=log[i];
				left++;
			}
			else
			{
				res[right]=log[i];
				right--;
			}
		}
		
		int max_level=res[0]-res[res.size()-1];
		for(int i=0;i<n-1;++i)
			max_level=max(max_level,abs(res[i]-res[i+1]));
		
		cout<<max_level<<'\n';
	}
	
	return 0;
}

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	
	cin>>t;
	while(t--)
	{
		int n;
		
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;++i)
			cin>>v[i];
		
		sort(v.begin(),v.end());
		
		int res=0;
		// 양 끝 지점에 해당하는 원소는 추가적으로 한 번의 경우가 더 존재하므로 따로 계산
		res=max(res,v[1]-v[0]);
		res=max(res,v[n-1]-v[n-2]);
		
		// 결국 첫 번째 풀이대로면 홀수항과 짝수항을 기준으로 양 끝부터 배치하므로 2칸 차이에 있는 원소와의 차이를 계산하면 됨
		for(int i=0;i<n-2;++i)
			res=max(res,v[i+2]-v[i]);
		
		cout<<res<<'\n';
	}
	
	return 0;
}
*/
