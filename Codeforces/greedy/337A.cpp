#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	
	cin>>n>>m;
	vector<int> puzzle(m);
	for(auto& i:puzzle)
		cin>>i;
	
	sort(puzzle.begin(),puzzle.end());
	
	int least=puzzle[n-1]-puzzle[0];
	for(int i=1;i<=m-n;++i)
	{
		if(puzzle[i+n-1]-puzzle[i]<least)
			least=puzzle[i+n-1]-puzzle[i];
	}
	cout<<least<<'\n';
	
	return 0;
}
