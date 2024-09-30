#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> v;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a,p;
	
	cin>>a>>p;
	v.push_back(a);
	
	int idx;
	int i=1;
	while(1)
	{
		int digit;
		int next=0;
		int tmp=v[i-1];
		while(tmp>0)
		{
			digit=tmp%10;
			next+=pow(digit,p);
			tmp/=10;
		}
		
		auto it=find(v.begin(),v.end(),next);
		if(it!=v.end())
		{
			idx=distance(v.begin(),it);
			break;
		}
		
		v.push_back(next);
		i++;
	}
	cout<<idx<<'\n';
	
	return 0;
}
