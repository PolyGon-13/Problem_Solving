#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,v,p,s,max,sum;
	vector<pair<int,int>> vec;
	
	cin>>n>>m;
	
	cin>>v>>p>>s;
	max=v+p+s;
	
	for(int i=1;i<=n;++i)
	{
		cin>>v>>p>>s;
		sum=v+p+s;
		
		if(max>=sum)
			vec.emplace_back(sum,i);
	}
	
	sort(vec.rbegin(),vec.rend());
	
	vector<int> res;
	res.push_back(0);
	
	for(int i=0;i<min(m-1,(int)vec.size());++i)
		res.push_back(vec[i].second);
	
	for(int i=0;i<res.size();++i)
		cout<<res[i]<<" ";
	cout<<endl;
	
	return 0;
}
// 꿈 열정 나눔
