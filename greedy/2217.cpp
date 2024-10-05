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
	int min=10000;
	
	cin>>n;
	vector<int> l(n,0);
	for(int i=0;i<n;i++)
		cin>>l[i];
	
	sort(l.begin(),l.end());
	
	int cnt=n;
	int res=l[n-1];
	for(int i=0;i<n-1;i++)
	{
		if(l[i]*cnt>res)
			res=l[i]*cnt;
		
		cnt--;
	}
	cout<<res<<'\n';
		
	return 0;
}
