#include <iostream>
#include <algorithm>

using namespace std;

int max_val=0;

void cnt_columns(char (*a)[51],int n)
{
	for(int i=0;i<n;i++)
	{
		int cnt=1;
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==a[i][j+1])
				cnt++;
			else
			{
				if(cnt>max_val)
					max_val=cnt;
				cnt=1;
			}
		}
	}
}

void cnt_row(char (*a)[51],int n)
{
	for(int i=0;i<n;i++)
	{
		int cnt=1;
		for(int j=0;j<n;j++)
		{
			if(a[j][i]==a[j+1][i])
				cnt++;
			else
			{
				if(cnt>max_val)
					max_val=cnt;
				cnt=1;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	char b[51][51];
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>b[i][j];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			swap(b[i][j],b[i][j+1]);
			cnt_columns(b,n);
			cnt_row(b,n);
			swap(b[i][j+1],b[i][j]);
			
			swap(b[j][i],b[j+1][i]);
			cnt_columns(b,n);
			cnt_row(b,n);
			swap(b[j+1][i],b[j][i]);
		}
	}
	cout<<max_val<<'\n';
	
	return 0;
}

// 교환이 여러번 가능하다고 생각하여 각 행과 열에 특정 문자가 몇 번 등장하는지에 따라 max_val을 설정하려고 했음
// 교환은 한 번만 가능하고 행 방향으로 한 번 교환한 후 비교하고, 열 방향으로 한 번 교환한 후 비교하는 과정을 여러번 거쳐야 함
