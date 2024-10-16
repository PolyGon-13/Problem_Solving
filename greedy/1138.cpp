#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	vector<int> h(n,0);
	vector<int> res(n,0);
	
	for(int i=0;i<n;++i)
		cin>>h[i];
	
	for(int i=0;i<n;++i)
	{
		int cnt=h[i];
		for(int j=0;j<n;++j)
		{
			if(res[j]==0) // 빈 자리인 경우
			{
				if(cnt==0) // 해당 자리에 앉을 수 있는 경우
				{
					res[j]=i+1;
					break;
				}
				else
					cnt--;
			}
		}
	}
	
	for(auto& i:res)
		cout<<i<<" ";
	cout<<'\n';
	
	return 0;
}
