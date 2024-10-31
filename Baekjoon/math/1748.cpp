#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int cnt=0;
	
	cin>>n;
	if(n<10)
	{
		cout<<n<<'\n';
		return 0;
	}
	
	for(int i=1;i<=n;i*=10)
		cnt+=n-i+1; // a부터 b까지의 개수 b-a+1
	// n-1+1 : 1부터 n까지의 수 중 일의 자리 수를 갖고 있는 수의 개수
	// n-10+1 : 1부터 n까지의 수 중 십의 자리 수를 갖고 있는 수의 개수
	// n-100+1 : 1부터 n까지의 수 중 백의 자리 수를 갖고 있는 수의 개수
	
	cout<<cnt<<'\n';
	
	return 0;
}
