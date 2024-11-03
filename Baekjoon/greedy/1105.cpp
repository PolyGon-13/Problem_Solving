#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string l,r;
	
	cin>>l>>r;
	
	if(l.length()!=r.length())
	{
		cout<<"0\n";
		return 0;
	}
	
	int cnt=0;
	int n=l.length();
	for(int i=0;i<n;++i)
	{
		// 각 자리의 숫자가 동일한 경우에는 계속 비교를 진행해야 함
		// 8이 아니라고 바로 break 해버리면 828 828과 같은 입력이 들어왔을 때 2가 아닌 1을 출력함
		if(l[i]!=r[i])
			break;
		
		if(l[i]=='8' && r[i]=='8')
			cnt++;
	}
	cout<<cnt<<'\n';
	
	return 0;
}
