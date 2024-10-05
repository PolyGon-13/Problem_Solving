#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,p6,p1;
	int p6_min=1000;
	int p1_min=1000;
	
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>p6>>p1;
		
		p6_min=min(p6_min,p6);
		p1_min=min(p1_min,p1);
	}
	
	int tmp=p6_min*(n/6); // 우선 6개 단위로 구매 (n이 6이하로 남게 함)
	int res=min((n%6==0)?tmp:tmp+p6_min,tmp+(n%6)*p1_min);
	// n%6==0이면 tmp에서 가격 끝, 아니면 p6_min 한 번 더해줘서 적어도 n개를 맞춤
	// 남은만큼 p1_min을 더해준 것과 위 값을 비교
	
	cout<<min(p1_min*n,res)<<'\n';
	
	return 0;
}
