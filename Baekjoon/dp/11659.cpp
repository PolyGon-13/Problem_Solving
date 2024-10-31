#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int n,m;
	
	cin>>n>>m;
	
	int x;
	int list[n+1];
	list[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		list[i]=list[i-1]+x;
	}
	
	int a,b;
	int result;
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
		result=list[b]-list[a-1]; // a<b일때, (1~b까지 합) - (1~a-1까지 합) = (a~b까지 합)
		cout<<result<<'\n';
	}
	
	return 0;
}
// 시간복잡도를 O(1)로 풀어야 하는 문제
// 각 요소를 저장하는 것이 아닌 누적합을 쌓아나가고 입력된 범위에 해당하는 영역을 빼주어 계산
