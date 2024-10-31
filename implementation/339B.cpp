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
	vector<int> task(m);
	for(int i=0;i<m;++i)
		cin>>task[i];
	
	auto new_end=unique(task.begin(),task.end());
	task.erase(new_end,task.end());
	m=task.size(); // unique 함수 사용 후 vector의 일부를 삭제했으므로 vector의 크기 m을 수정해주어야 함
	
	unsigned long long sum=task[0]-1;
	for(int i=1;i<m;++i)
	{
		if(task[i]<task[i-1])
			sum+=(n-task[i-1]+task[i]);
		else
			sum+=(task[i]-task[i-1]);
	}
	cout<<sum<<'\n';
	
	return 0;
}
