#include <iostream>

using namespace std;

char arr[101][101];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>arr[i][j];
	}
	
	int cnt=0;
	int cnt_row=0;
	int cnt_columns=0;
	for(int i=1;i<=n;i++)
	{
		cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(arr[i][j]=='.')
				cnt++;
			else
			{
				if(cnt>=2)
					cnt_row++;
				cnt=0;
			}
		}
		if(cnt>=2) cnt_row++;
	}
	
	for(int i=1;i<=n;i++)
	{
		cnt=0;
		for(int j=1;j<=n;j++)
		{
			if(arr[j][i]=='.')
				cnt++;
			else
			{
				if(cnt>=2)
					cnt_columns++;
				cnt=0;
			}
		}
		if(cnt>=2) cnt_columns++;
	}
	cout<<cnt_row<<" "<<cnt_columns<<'\n';
	
	return 0;
}
