#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int sum=0;
	string n;
	vector<int> num;
	
	cin>>n;
	for(int i=0;i<n.size();i++)
		num.push_back(n[i]-'0');
	
	sort(num.rbegin(),num.rend());
	
	for(int i=0;i<num.size();i++)
		sum+=num[i];
	
	if(sum%3!=0) cout<<"-1\n";
	else if(num[num.size()-1]!=0) cout<<"-1\n";
	else
	{
		for(auto i:num)
			cout<<i;
	}
	cout<<'\n';
	
	return 0;
}
