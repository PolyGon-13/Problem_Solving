#include <iostream>

using namespace std;

pair<int,int> len[12];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int k,d,l,big_area,small_area;
	
	cin>>k;
	for(int i=0;i<6;i++)
	{
		cin>>d>>l;
		len[i]=len[i+6]={d,l};
	}
	
	for(int i=3;i<12;i++)
	{
		if(len[i].first==len[i-2].first && len[i-1].first==len[i-3].first)
		{
			big_area=len[i+1].second*len[i+2].second;
			small_area=len[i-1].second*len[i-2].second;
			
			break;
		}
	}
	// ABAB와 같은 형태로 입력이 들어올 때, 중간의 BA 길이를 통해 결과 얻을 수 있음
	// 크기 6의 시퀀스를 반복해서 크기 12의 시퀀스로 판단하였을 때, ABAB를 찾을 수 있음
	cout<<k*(big_area-small_area);
	
	return 0;
}
