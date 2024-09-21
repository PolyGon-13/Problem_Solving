#include <iostream>

using namespace std;

int s[50][50];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string input;
	int n,m;
	int size=1;
	
	cin>>n>>m;	
	for(int i=0;i<n;i++)
	{
		cin>>input;
		for(int j=0;j<m;j++)
			s[i][j]=input[j]-'0';
	}
	
	int ans;
	int min_len=min(n,m);
	for(int l=1;l<=min_len;l++)
	{
		for(int i=0;i<=n-l;i++)
		{
			for(int j=0;j<=m-l;j++)
			{
				int a=s[i][j];
				int b=s[i+l-1][j];
				int c=s[i][j+l-1];
				int d=s[i+l-1][j+l-1];
				if(a==b && b==c && c==d)
					ans=l;
			}
		}
	}
	cout<<ans*ans<<'\n';
	
	return 0;
}
