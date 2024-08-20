#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int n,m;
	
	cin>>n>>m;
	
	int x;
	int list[n+1];
	list[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		list[i]=list[i-1]+x;
	}
	
	int a,b;
	int result;
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
		result=list[b]-list[a-1];
		cout<<result<<'\n';
	}
	
	return 0;
}
