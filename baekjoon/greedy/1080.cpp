#include <iostream>
#include <vector>
#include <string>

using namespace std;

void flip3x3(vector<string>& matrix,int row,int col)
{
	for(int x=row;x<row+3;++x)
	{
		for(int y=col;y<col+3;++y)
			matrix[x][y]=(matrix[x][y]=='0')?'1':'0';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	
	cin>>n>>m;
	vector<string> a(n);
	vector<string> b(n);
	
	for(auto& row:a)
		cin>>row;
	for(auto& row:b)
		cin>>row;
	
	int cnt=0;
	for(int i=0;i<=n-3;++i)
	{
		for(int j=0;j<=m-3;++j)
		{
			if(a[i][j]!=b[i][j])
			{
				flip3x3(a,i,j);
				cnt++;
			}
		}
	}
	
	bool is_same=true;
	for(int i=0;i<n && is_same;++i)
	{
		if(a[i]!=b[i])
			is_same=false;
	}
	
	if(is_same)
		cout<<cnt<<'\n';
	else
		cout<<"-1\n";
	
	return 0;
}
