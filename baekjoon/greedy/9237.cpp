#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	vector<int> day(n,0);
	
	for(int i=0;i<n;i++)
		cin>>day[i];
	
	// greater<int>()는 사실 functional 라이브러리에 있는 함수였음!
	sort(day.begin(),day.end(),greater<int>());
	
	int max_day=0;
	for(int i=0;i<n;i++)
	{
		if(max_day<(i+day[i]+1))
		   max_day=i+day[i]+1;
	}
	cout<<max_day+1<<'\n';
	
	return 0;
}
