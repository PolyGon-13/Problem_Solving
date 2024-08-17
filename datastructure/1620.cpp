#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i;
	int n,m;
	string str;
	string name[1000001];
	map<string,int> pokemon;
	
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>str;
		pokemon.insert({str,i});
		name[i]=str;
		
	}
	
	for(i=0;i<m;i++)
	{
		cin>>str;
		if(isdigit(str[0]))
			cout<<name[stoi(str)]<<'\n';
		else
			cout<<pokemon[str]<<'\n';
	}
	
	return 0;
}

/*
// map 라이브러리를 이용한 다른 풀이
#include <iostream>
#include <string>
#include <map>

using namespace std;

string pokemon[1000001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	map<string,int> p;
	int i;
	int n,m,num;
	string name;
	
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>pokemon[i];
		p.insert({pokemon[i],i});
	}
	
	for(i=0;i<m;i++)
	{
		cin>>name;
		
		if(isdigit(name[0])!=0)
		// isdigit 함수는 숫자인지 판별함
		{
			num=stoi(name);
			// stoi 함수는 string to int로 string을 int형으로 바꿔줌
			cout<<pokemon[num]<<'\n';
		}
		else
		{
			auto index=p.find(name);
			// find는 key값을 이용해 value값을 찾는 함수 (역으로는 안됨)
			cout<<index->second<<'\n';
			// index->second는 map의 value값을 가리킴
			// index->first는 key값을 가리킴
		}
	}
	
	return 0;
}
*/

/*
// 클래스를 이용한 풀이 (하지만 for문 중첩으로 인해 시간초과 발생)
#include <iostream>
#include <string>

using namespace std;

class pokemon
{
public:
	string pokemon_name;
	int pokemon_num;
};

pokemon* p=new pokemon[1000001];

int main() 
{
	int i,j;
	int n,m,num;
	string name;
	
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>p[i].pokemon_name;
		p[i].pokemon_num=i;
	}
	
	for(i=0;i<m;i++)
	{
		cin>>name;
		
		if(isdigit(name[0])!=0)
		{
			num=stoi(name);
			for(j=1;j<=n;j++)
				if(num==p[j].pokemon_num)
					cout<<p[j].pokemon_name<<'\n';
		}
		else
		{
			for(j=1;j<=n;j++)
				if(name==p[j].pokemon_name)
					cout<<p[j].pokemon_num<<'\n';
		}
	}
	
	return 0;
}
*/
