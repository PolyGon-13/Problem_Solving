#include <iostream>

using namespace std;

int b[5][5];

template <size_t rows,size_t cols>
int check(int (&b)[rows][cols])
{
	int cnt=0;
	bool is_bingo=true;
	
	for(int x=0;x<rows;x++)
	{
		is_bingo=true;
		
		for(int y=0;y<cols;y++)
		{
			if(b[x][y]!=0)
			{
				is_bingo=false;
				break;
			}
		}
		if(is_bingo)
			cnt++;
	}
	
	for(int x=0;x<rows;x++)
	{
		is_bingo=true;
		
		for(int y=0;y<cols;y++)
		{
			if(b[y][x]!=0)
			{
				is_bingo=false;
				break;
			}
		}
		if(is_bingo)
			cnt++;
	}
	
	is_bingo=true;
	for(int x=0;x<rows;x++)
	{
		if(b[x][x]!=0)
		{
			is_bingo=false;
			break;
		}
	}
	if(is_bingo)
		cnt++;
	
	is_bingo=true;
	for(int x=0;x<rows;x++)
	{
		if(b[x][4-x]!=0)
		{
			is_bingo=false;
			break;
		}
	}
	if(is_bingo)
		cnt++;
	
	if(cnt>=3)
		return 1;
	else
		return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x;
	int cmd=0;
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			cin>>b[i][j];
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>x;
			cmd++;
			
			for(int k=0;k<5;k++)
			{
				for(int l=0;l<5;l++)
				{
					if(b[k][l]==x)
						b[k][l]=0;
				}
			}
			
			if(check(b)==1)
			{
				cout<<cmd<<'\n';
				return 0;
			}
		}
	}
	
	return 0;
}
