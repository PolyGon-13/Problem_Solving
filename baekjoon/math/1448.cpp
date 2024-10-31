#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_triangle(int a,int b,int c)
{
	if((a+b)>c && (a+c)>b && (b+c)>a)
		return true;
	else
		return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	vector<int> v(n,0);
	for(int i=0;i<n;++i)
		cin>>v[i];
	
	sort(v.begin(),v.end(),greater<int>());
	
	int max=0;
	for(int i=0;i<n-2;++i)
	{
		if(is_triangle(v[i],v[i+1],v[i+2]))
		{
			if(max<v[i]+v[i+1]+v[i+2])
				max=v[i]+v[i+1]+v[i+2];
		}
	}
	if(max==0)
		cout<<"-1\n";
	else
		cout<<max<<'\n';
	
	return 0;
}
