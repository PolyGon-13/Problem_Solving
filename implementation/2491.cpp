#include <iostream>

#define MAX 100001

using namespace std;

int arr[MAX];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x;
	int ans=0,cnt=1;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<=arr[i+1])
			cnt++;
		else
		{
			ans=max(ans,cnt);
			cnt=1;
		}
	}
	ans=max(ans,cnt);
	cnt=1;
	
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>=arr[i+1])
			cnt++;
		else
		{
			ans=max(ans,cnt);
			cnt=1;
		}
	}
	ans=max(ans,cnt);
	
	cout<<ans<<'\n';
	
	return 0;
}
