#include <iostream>
#include <cmath>

using namespace std;

int t[16];
int p[16];
int res[16];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,z;
	
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>t[i]>>p[i];
	
	for(int i=n;i>0;i--)
	{
		z=i+t[i];
		if(z>n+1) // n을 넘어서면 상담불가
			res[i]=res[i+1]; // res[i]는 상담불가하므로 이전 이익을 그대로 가져옴 (해당 일의 이익은 0)
		else
			res[i]=max(res[i+1],res[z]+p[i]);
			// res[i+1]은 res[i]를 포기했을 때 얻을 수 있는 이익
			// res[z]+p[i]는 res[i]를 진행하고 그 다음 상담을 했을 때 얻을 수 있는 이익
	}
	cout<<res[1]<<'\n'; // n일부터 1일까지 진행하므로 res[1]에 최대이익이 담겨있음
	
	return 0;
}
