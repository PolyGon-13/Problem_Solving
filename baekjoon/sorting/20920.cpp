#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
// unordered_map은 map보다 더 빠른 탐색을 하기 위한 자료구조로 해쉬테이블로 구현한 자료구조
// unordered_map의 시간 복잡도는 O(1), map은 이진탐색으로 구현되어 O(logn)
// unordered_map은 중복된 데이터를 허용하지 않고, map에 비해 데이터가 많을 때 좋은 성능을 보임
// key가 유사한 데이터가 많으면 해시 충돌로 성능이 하락할 수 있음

using namespace std;

bool cmp(pair<string,int>& a,pair<string,int>& b)
{
	if(a.second==b.second)
	{
		if(a.first.length()==b.first.length())
			return a.first<b.first;
		return a.first.length()>b.first.length();
	}
	return a.second>b.second;
}
// sort의 cmp 함수에서 a와 b를 비교하여 true를 반환한다는 것은 a가 b보다 우선적으로 정렬되어야 함을 의미(a가 b보다 앞에 존재)

unordered_map<string,int> map;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	string word;
	
	cin>>n>>m;
	while(n--)
	{
		cin>>word;
		if(word.length()>=m)
			map[word]++;
	}
	
	vector<pair<string,int>> vec(map.begin(),map.end());
	sort(vec.begin(),vec.end(),cmp);
	
	for(auto i:vec)
		cout<<i.first<<'\n';
	
	return 0;
}
