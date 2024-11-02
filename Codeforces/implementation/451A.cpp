#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	
	cin>>n>>m;
	
	if((min(n,m)%2)==0)
		cout<<"Malvika\n";
	else
		cout<<"Akshat\n";
	
	return 0;
}
