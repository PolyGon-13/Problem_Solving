#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	vector<int> pred(n,0);
	for(int i=0;i<n;++i)
		cin>>pred[i];
	
	sort(pred.begin(),pred.end());
	
	long long cpl=0;
	for(int i=0;i<n;++i)
	{
		// static_cast : complie time에 명시적 형변환을 수행하는 형 변환 연산자
		cpl+=static_cast<long long>(abs(i+1-pred[i]));
	}
	cout<<cpl<<'\n';
	
	return 0;
}
