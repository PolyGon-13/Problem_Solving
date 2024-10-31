#include <iostream>
#include <cmath>
#include <string>
 
using namespace std;

int decimal(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a,b;
	
	cin>>a>>b;
	
	string tmp=to_string(b)+to_string(a);
	
	if(decimal(a) && decimal(stoi(tmp)))
		cout<<"Yes\n";
	else
		cout<<"No\n";
	
	return 0;
}
