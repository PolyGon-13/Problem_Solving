#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,s,t;
	
	cin>>n;
	vector<pair<int,int>> m(n);
	priority_queue<int,vector<int>,greater<int>> pq;
	// priority_queue는 기본적으로 내림차순 정렬이므로 greater<int> 옵션으로 오름차순 정렬로 변경
	// priority_queue는 두 번째 요소로 내부적으로 사용할 컨테이너를 지정 (여기서는 vector 컨테이너 사용)
	
	for(auto& [start,end]:m)
		cin>>start>>end;
	
	sort(m.begin(),m.end());
	
	pq.emplace(m[0].second);
	
	for(int i=1;i<n;++i)
	{
		if(pq.top()<=m[i].first)
			pq.pop();
		
		pq.emplace(m[i].second);
	}
	cout<<pq.size()<<'\n';
	
	return 0;
}
