#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a,long long b)
{
	long long r=a%b;
	if(r==0)
		return b;
	return gcd(b,r);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	long long pos,tmp;
	
	cin>>n;
	
	vector <long long> dis; 
	for(int i=0;i<n;i++)
	{
		cin>>pos;
		if(i==0)
			tmp=pos;
		else
		{
			long long x=pos-tmp;
			dis.emplace_back(x);
			tmp=pos;
		}
	}
	
	long long res=dis[0];
	for(size_t i=1;i<dis.size();i++)
		res=gcd(res,dis[i]);
	
	long long ans=0;
	for(auto i:dis)
		ans+=i/res-1;
	
	cout<<ans<<'\n';
	
	return 0;
}

/*
#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a,long long b)
{
	long long r=a%b;
	if(r==0)
		return b;
	return gcd(b,r);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	long long first,prev,pos,current_gcd=0;
	cin>>first;
	prev=first;
		
	for(int i=1;i<n;i++)
	{
		cin>>pos;
		
		long long gap=pos-prev; // 이전 값과의 차이
		current_gcd=(i==1)?gap:gcd(current_gcd,gap);
		// i가 1인 경우에는 gap 그대로
		// 이전 요소끼리의 gcd와 gap의 gcd를 계산
		prev=pos;
		// 다음 연산을 위해 현재 요소 저장
	}
	
	long long total_trees=(prev-first)/current_gcd+1; // 전체 나무 개수
	long long additional_trees=total_trees-n; // 추가로 심어야 할 나무 개수
	
	cout<<additional_trees<<'\n';
	
	return 0;
}
*/
