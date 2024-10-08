#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,l;
	
	cin>>n>>l;
	vector<int> leak(n,0);
	for(int i=0;i<n;i++)
		cin>>leak[i];
	
	sort(leak.begin(),leak.end());
	
	int cnt=0;
	int last=0;
	for(int i=0;i<n;i++)
	{
		if(leak[i]>last)
		{
			cnt++;
			last=leak[i]+l-1; // 테이프의 끝을 업데이트
		}
	}
	cout<<cnt<<'\n';
	
	return 0;
}
