#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	map<string,bool,greater<string>> person;
	// greater<string>을 추가해 string을 기준으로 내림차순 정렬
	
	int i;
	for(i=0;i<n;i++)
	{
		string name,cmd;
		cin>>name>>cmd;
		
		if(cmd=="enter")
			person.insert({name,true});
		else if(cmd=="leave")
			person.erase(name);
			// 키값(name)을 이용해 데이터 삭제
	}
	
	for(map<string,bool>::iterator iter=person.begin();iter!=person.end();iter++)
	// iterator를 이용해 맵을 순회할 때 사용
	{
		if(iter->second)
			cout<<iter->first<<'\n';
	}
	
	return 0;
}
