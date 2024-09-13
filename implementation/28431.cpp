#include <iostream>
#include <array>
 
using namespace std;

array<int,10> arr;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x;
	
	for(int i=0;i<5;i++)
	{
		cin>>x;
		arr[x]=!arr[x];
	}
	
	for(int i=0;i<10;i++)
	{
		if(arr[i])
			cout<<i<<'\n';
	}
	
	return 0;
}
