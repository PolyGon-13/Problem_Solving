#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x;
	
	cin>>n;
	vector<int> num(n);
	
	for(auto& i:num)
		cin>>i;
	
	cin>>x;
	
	sort(num.begin(),num.end());
	
	int cnt=0;
	int left=0,right=n-1;
	while(left<right)
	{
		int sum=num[left]+num[right];
		
		if(sum==x)
		{
			cnt++;
			left++;
			right--;
		}
		else if(sum<x)
			left++;
		else
			right--;
	}
	cout<<cnt<<'\n';
	
	return 0;
}
