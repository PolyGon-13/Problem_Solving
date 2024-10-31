#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	
	cin>>n>>m;
	vector<string> DNA(n);
	
	for(int i=0;i<n;++i)
		cin>>DNA[i];
	
	vector<vector<int>> cnt(m,vector<int>(4,0));
	
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			switch(DNA[i][j])
			{
				case 'A':
					cnt[j][0]++;
					break;
				case 'C':
					cnt[j][1]++;
					break;
				case 'G':
					cnt[j][2]++;
					break;
				case 'T':
					cnt[j][3]++;
					break;
			}
		}
	}
	
	string res="";
	int res_ham_dis=0;
	for(int i=0;i<m;++i)
	{
		int max_cnt=0;
		char fre_char='A';
		
		if(cnt[i][0]>max_cnt)
		{
			max_cnt=cnt[i][0];
			fre_char='A';
		}
		if(cnt[i][1]>max_cnt)
		{
			max_cnt=cnt[i][1];
			fre_char='C';
		}
		if(cnt[i][2]>max_cnt)
		{
			max_cnt=cnt[i][2];
			fre_char='G';
		}
		if(cnt[i][3]>max_cnt)
		{
			max_cnt=cnt[i][3];
			fre_char='T';
		}
		
		res+=fre_char;
		res_ham_dis+=(n-max_cnt);
	}
	cout<<res<<'\n';
	cout<<res_ham_dis<<'\n';
	
	return 0;
}
