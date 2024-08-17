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
