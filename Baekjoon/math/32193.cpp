#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b;
	int x=0,y=0,z;
	
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		x+=a;
		y+=b;
		z=x-y;
		cout<<z<<'\n';
	}
	
	return 0;
}
// a번 승강장의 높이
