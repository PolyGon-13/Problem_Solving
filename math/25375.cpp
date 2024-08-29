#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int q,res;
	long long a,b;
	
	cin>>q;
	while(q--)
	{
		cin>>a>>b;
		res=(a<b && b%a==0)?1:0;
		cout<<res<<'\n';
	}
	
	return 0;
}
