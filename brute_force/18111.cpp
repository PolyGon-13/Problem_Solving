#include <iostream>
#include <vector>
 
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,b,time;
	int mint=999999999;
	int minh=999999999;
	int rt=0,st=0;
	
	cin>>n>>m>>b;
	vector<vector<int>> v(n,vector<int>(m,0));
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>v[i][j];
	
	for(int i=0;i<=256;i++)
	{
		rt=0; // 블록 제거 시간
		st=0; // 블록 설치 시간
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				if(v[j][k]>i) // 선택된 영역이 i(특정 높이)보다 큰 경우
					rt+=v[j][k]-i; // 차이값만큼 블록을 제거하고 rt에 추가
				else if(v[j][k]==i)
					continue; // 같은 경우에는 문제가 없으므로 continue
				else if(v[j][k]<i)
					st+=i-v[j][k]; // 차이값만큼 블록을 설치하고 st에 추가
			}
		}
		if(rt+b>=st) // rt+b는 인벤토리에 들어있는 블록의 수이므로 st보다 작으면 설치가 불가능
		{
			time=rt*2+st;
			if(time<=mint)
			{
				mint=time;
				minh=i;
			}
		}
	}
	cout<<mint<<" "<<minh<<'\n';
	
	return 0;
}
