#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int t,n,result;
	string a,b;
	
	cin>>t;

	while(t--)
	{
		map<string,int> m; 
		// 다음 케이스에 영향을 주면 안되므로 매 케이스마다 map을 초기화
		
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cin>>a>>b;
			m[b]++;
		}
		
		result=1;
		
		for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
			result*=it->second+1; 
			// 종류 b의 가짓수가 n가지라면 각각 입는 경우 한 개씩과 모두 입지 않는 경우를 합해서 n+1가지
		
		cout<<result-1<<'\n';
		// 알몸인 경우는 제외해야 하므로 한 가지를 빼줌
	}
	
	return 0;
}
