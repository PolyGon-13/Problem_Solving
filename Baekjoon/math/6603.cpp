#include <iostream>

using namespace std;

int k;
int num[14];
int ans[6];

void dfs(int start,int depth)
{
	if(depth==6)
	{
		for(int i=0;i<6;i++)
			cout<<ans[i]<<" ";
		cout<<'\n';
		return;
	}
	
	for(int i=start;i<k;i++)
	{
		ans[depth]=num[i];
		dfs(i+1,depth+1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	while(cin>>k && k)
	{	
		for(int i=0;i<k;i++)
			cin>>num[i];
		dfs(0,0);
		cout<<'\n';
	}
	
	return 0;
}
