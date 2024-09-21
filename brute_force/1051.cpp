#include <iostream>

using namespace std;

int s[50][50];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,ans,min_len,a,b,c,d;
	string input;
	
	cin>>n>>m;	
	for(int i=0;i<n;i++)
	{
		cin>>input;
		for(int j=0;j<m;j++)
			s[i][j]=input[j]-'0'; // 숫자가 모두 붙어서 나오기 때문에 문자열로 처리
	}
	
	min_len=min(n,m);
	for(int l=1;l<=min_len;l++)
	{
		for(int i=0;i<=n-l;i++)
		{
			for(int j=0;j<=m-l;j++)
			{
				// 케이스별로 꼭짓점이 될 수 있는 경우를 모두 탐색
				a=s[i][j]; // 왼쪽 위 꼭짓점
				b=s[i+l-1][j]; // 오른쪽 위 꼭짓점
				c=s[i][j+l-1]; // 왼쪽 아래 꼭짓점
				d=s[i+l-1][j+l-1]; // 오른쪽 아래 꼭짓점
				if(a==b && b==c && c==d)
					ans=l;
			}
		}
	}
	cout<<ans*ans<<'\n';
	
	return 0;
}
