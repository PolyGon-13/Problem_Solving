#include <iostream>
#include <set>

using namespace std;

int main()
{
	int i;
	int n,m,value;
	cin>>n>>m;
	
	set<int> a,ans_1,b,ans_2;
	
	for(i=0;i<n;i++)
	{
		cin>>value;
		a.insert(value);
		ans_1.insert(value);
	}
	for(i=0;i<m;i++)
	{
		cin>>value;
		b.insert(value);
		ans_2.insert(value);
	}
	
	int cnt=0;
	for(auto i:b)
		ans_1.erase(i);
	for(auto i:a)
		ans_2.erase(i);
	
	cout<<ans_1.size()+ans_2.size()<<endl;
	
	return 0;
}
// 집합 라이브러리를 이용한 풀이

/*
// map 라이브러리를 이용한 풀이
#include <iostream>
#include <map>
// map<key,value> map1; 형태로 선언

using namespace std;

int main()
{
	int i;
	int a,b,tmp;
	int sum=0;
	cin>>a>>b;
	
	map<int,int> mpA,mpB; // map은 key를 기준으로 해서 오름차순으로 정렬함
	// map<int,int,greater> map1; 으로 선언하면 내림차순 정렬
	
	for(i=0;i<a;++i)
	{
		cin>>tmp;
		mpA[tmp]=tmp;
	}
	for(i=0;i<b;++i)
	{
		cin>>tmp;
		mpB[tmp]=tmp;
	}
	
	for(auto it=mpA.begin(); it!=mpA.end(); it++)
		if(!mpB[it->first])
		// it->first는 현재 mpA의 요소에서 키를 가져옴
		// mpB에서 it->first 키에 대한 값을 조회하여 키가 존재하지 않거나, 그 값이 0일때 참이 됨 
			sum++;
	
	for(auto it=mpB.begin(); it!=mpB.end(); it++)
		if(!mpA[it->first])
			sum++;
	
	cout<<sum<<endl;
	
	return 0;
}
*/

/*
// 교집합을 이용한 풀이 (가장 시간 짧음)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i;
	int n,m,t;
	int cnt=0;
	
	cin>>n>>m;
	
	vector<int> v(n+m);
	
	for(i=0;i<n;i++)
		cin>>v[i];
	
	sort(v.begin(),v.end()); // 정렬할 시작점과 끝점 매개변수로 입력
 	// default는 오름차순, greater<자료형>()을 3번째 인자로 넣으면 내림차순 정렬
  	// 3번째 인자에 함수를 입력하면 정렬할 기준을 지정할 수 있음
	
	for(i=0;i<m;i++)
	{
		cin>>t;
		if(binary_search(v.begin(),v.end(),t)) // 찾고자 하는 범위의 시작점, 범위의 끝점, 찾고자 하는 수를 매개변수로 입력
			cnt++;
	}
	cout<<v.size()-2*cnt<<endl; // 교집합을 이용한 풀이
	
	return 0;
}
*/
