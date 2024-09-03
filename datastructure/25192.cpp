#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,cnt=0;
	string name;
	map<string,int> m;
	
	cin>>n;
	while(n--)
	{
		cin>>name;
		
		if(name=="ENTER")
			m.clear();
		else
		{
			if(m[name]==0)
			{
				cnt++;
				m[name]++;
			}
		}
	}
	cout<<cnt<<endl;
	
	return 0;
}
