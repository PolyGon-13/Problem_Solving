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
