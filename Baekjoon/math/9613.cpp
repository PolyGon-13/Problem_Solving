#include <iostream>
#include <vector>

using namespace std;

int t,n,x;
long long cnt;
vector<int> v;

int gcd_check(int a,int b)
{
	if(b==0) return a;
	else return gcd_check(b,a%b);
}
// 최대공약수 계산 (유클리드 호제법)

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		v.clear();
		
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		
		cnt=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				cnt+=gcd_check(v[i],v[j]);
				// 모든 경우에 대해 gcd를 계산해서 cnt에 추가
			}
		}
		cout<<cnt<<'\n';
	}
	
	return 0;
}
