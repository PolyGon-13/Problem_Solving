#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> v;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a,p;
	
	cin>>a>>p;
	v.push_back(a);
	
	int idx;
	int i=1;
	while(1)
	{
		int digit;
		int next=0;
		int tmp=v[i-1];
		while(tmp>0)
		{
			digit=tmp%10;
			next+=pow(digit,p);
			tmp/=10;
		}
		
		auto it=find(v.begin(),v.end(),next);
		if(it!=v.end())
		{
			idx=distance(v.begin(),it);
			break;
		}
		
		v.push_back(next);
		i++;
	}
	cout<<idx<<'\n';
	
	return 0;
}

/*
#include <iostream>
#include <cmath>

using namespace std;

#define Max 240000

int a,p;
int check[Max];

void dfs(int n)
{
	check[n]++;
	
	// 1번만 나온 수를 골라내기 위해 반복되는 구간을 2번 봐야함
	// 반복의 시작점이 3번째 나온 순간 반복 구간 내의 수들은 check의 요소값이 시작점 제외(시작점은 3) 2
	// 반복 구간 외의 수들은 1
	if(check[n]==3) // 같은 부분이 한 번 반복되면 return
		return;
	
	// 다음 수열 구하기
	int next=0;
	while(n)
	{
		next+=pow(n%10,p);
		n/=10;
	}

	dfs(next);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>a>>p;
	dfs(a);
	
	int cnt=0;
	for(int i=1;i<Max;i++)
	{
		if(check[i]==1)
			cnt++;
	}
	cout<<cnt<<'\n';
	
	return 0;
}
*/
