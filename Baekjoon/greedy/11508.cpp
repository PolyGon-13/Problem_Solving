#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,c;
	
	cin>>n;
	vector<int> v(n);
	for(auto& i:v)
		cin>>i;
	
	sort(v.begin(),v.end(),greater<int>());
	// sort(v.rbegin(),v.rend()); 내림차순 정렬
	
	int sum=0;
	for(int i=0;i<v.size();i+=3)
	{
		sum+=v[i];
		if(i+1<v.size())
			sum+=v[i+1];
	}
	cout<<sum<<'\n';
	
	return 0;
}
