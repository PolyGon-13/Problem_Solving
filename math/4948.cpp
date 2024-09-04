#include <iostream>
#include <cmath>

using namespace std;

bool prime(int n)
{
	if(n==1)
		return 0;
	
	for(int i=2;i<=sqrt(n);i++) // 2부터 sqrt(n)까지의 수로 나누었을 때 나머지가 0이 된다면 소수가 아님
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
// 에라토스테네스의 체

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,cnt=0;
	
	while(1)
	{
		cnt=0;
		
		cin>>n;
		
		if(n==0) break;
		
		for(int i=n+1;i<=2*n;i++)
		{
			if(prime(i))
				cnt++;
		}
		cout<<cnt<<'\n';
	}
	
	return 0;
}
