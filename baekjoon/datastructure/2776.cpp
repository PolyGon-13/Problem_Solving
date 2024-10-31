#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool binary_search(int start,int end,int target,vector<int>& v)
{
	if(start>end)
		return false;
	
	int mid=(start+end)/2;
	
	if(v[mid]==target) 
		return true;
	else if(v[mid]<target) 
		return binary_search(mid+1,end,target,v);
	else 
		return binary_search(start,mid-1,target,v);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,n,m,x;

	cin>>t;
	while(t--)
	{
		vector<int> n1; // 매 반복마다 초기화시켜주어야 함
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			n1.emplace_back(x);
		}
		
		sort(n1.begin(),n1.end());
		
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>x;
			if(binary_search(0,n1.size()-1,x,n1)) // 이진탐색
				cout<<"1\n";
			else
				cout<<"0\n";
		}
	}
	
	return 0;
}
