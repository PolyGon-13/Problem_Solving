#include <iostream>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int cnt=0;
	
	cin>>n;
	array<int,101> v;
	for(int i=1;i<=n;i++)
		cin>>v[i];
	
	for(int i=n-1;i>0;i--)
	{
		while(v[i]>=v[i+1])
		{
			v[i]--;
			cnt++;
		}
	}
	cout<<cnt<<'\n';
	
	return 0;
}
