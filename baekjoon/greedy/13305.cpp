#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	vector<int> road(n-1,0);
	vector<int> oil(n,0);
	for(int i=0;i<n-1;i++)
		cin>>road[i];
	for(int i=0;i<n;i++)
		cin>>oil[i];
	
	long long pay=0;
	long long min_price=oil[0];
	for(int i=0;i<n-1;i++)
	{
		if(oil[i]<min_price)
			min_price=oil[i];
		
		pay+=min_price*road[i];
	}
	cout<<pay<<'\n';
	
	return 0;
}
