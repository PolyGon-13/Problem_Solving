#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	string team;
	
	cin>>n;
	map<string,int> score;
	
	for(int i=0;i<n;++i)
	{
		cin>>team;
		score[team]++;
	}
	
	int max=0;
	string win;
	for(const auto& p:score)
	{
		if(max<p.second)
		{
			max=p.second;
			win=p.first;
		}
	}
	cout<<win<<'\n';
	
	return 0;
}
