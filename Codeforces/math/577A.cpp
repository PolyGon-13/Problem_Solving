#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x;
	int cnt=0;
	
	cin>>n>>x;
	for(int i=1;i<=n;++i)
	{
		if(i>x)
			break;
		
		if(x%i==0)
			if(x/i<=n)
				cnt++;
	}
	cout<<cnt<<'\n';
	
	return 0;
}
