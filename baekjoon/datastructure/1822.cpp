#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,x;
	set<int> s;
	set<int>::iterator c;
	
	cin>>n>>m;
	while(n--)
	{
		cin>>x;
		s.insert(x);
	}
	
	while(m--)
	{
		cin>>x;
		
		c=s.find(x);
		if(c==s.end())
			continue;
		else
			s.erase(c);
	}
	cout<<s.size()<<'\n';
	
	for(auto i:s)
		cout<<i<<" ";
	cout<<'\n';
	
	return 0;
}
// vector를 이용해 입력받고 정렬하고 찾는 방식으로 접근헀지만 시간초과가 발생함
// 원소를 입력받으면 중복 제거하고 정렬까지 해주는 set으로 해결
