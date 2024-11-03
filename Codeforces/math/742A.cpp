#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	if(n==0)
	{
		cout<<"1\n";
		return 0;
	}
	
	int t=n%4;
	switch(t)
	{
		case 0:
			cout<<"6\n";
			break;
		case 1:
			cout<<"8\n";
			break;
		case 2:
			cout<<"4\n";
			break;
		case 3:
			cout<<"2\n";
			break;
	}
	
	return 0;
}
