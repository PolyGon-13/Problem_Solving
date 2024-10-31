#include <iostream>
#include <list>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	string line;
	list<char> pwd;
	list<char>::iterator cur;
	
	cin>>t;
	while(t--)
	{
		cin>>line;
		pwd.clear(); // list 내의 모든 요소 제거
		cur=pwd.begin();
		
		for(const auto& cmd:line)
		{
			if(cmd=='<')
			{
				if(distance(pwd.begin(),cur)>0)
					cur--;
			}
			else if(cmd=='>')
			{
				if(distance(cur,pwd.end())>0)
					cur++;
			}
			else if(cmd=='-')
			{
				if(cur!=pwd.begin())
					cur=pwd.erase(--cur);
					// 아래에서 입력 후에는 cur++ 해주므로 --cur로 erase
			}
			else
			{
				cur=pwd.insert(cur,cmd);
				cur++; // 다음 입력을 위해 커서 한 칸 이동
			}
		}
		
		for(auto& x:pwd)
			cout<<x;
		cout<<'\n';
	}
	
	return 0;
}
