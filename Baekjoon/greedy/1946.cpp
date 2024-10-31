#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person
{
public:
	int docs;
	int interview;
	
	Person(int d,int i):docs(d),interview(i){}
	
	~Person()=default;
};

inline bool compare(const Person& a,const Person& b)
{
	return a.docs<b.docs;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,n;
	int docs,interview;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<Person> p;
		
		p.reserve(n); // 메모리 할당 최적화
		for(int i=0;i<n;++i)
		{
			cin>>docs>>interview;
			p.emplace_back(docs,interview);
		}
		
		sort(p.begin(),p.end(),compare);
		
		int min_score=p.front().interview; // 첫 원소의 면접 점수
		int cnt=1;
		for(auto it=p.begin()+1;it!=p.end();++it)
		{
			if(min_score>=it->interview)
			{
				cnt++;
				min_score=it->interview;
			}
		}
		
		cout<<cnt<<'\n';
	}
	
	return 0;
}
