#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

struct Study
{
	int d;
	int w;
};

bool compare(const Study& a,const Study& b)
{
	return a.w>b.w;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int max_d=0;
	
	cin>>n;
	vector<Study> score(n);
	for(int i=0;i<n;++i)
	{
		cin>>score[i].d>>score[i].w;
		if(score[i].d>max_d)
			max_d=score[i].d;
	}
	
	sort(score.begin(),score.end(),compare);
	
	int max_score=0;
	vector<int> check(max_d+1,0);
	for(const auto& i:score)
	{
		if(!check[i.d])
		{
			check[i.d]=1;
			max_score+=i.w;
		}
		else
		{
			int roop=i.d-1;
			while(roop>0)
			{
				if(!check[roop])
				{
					check[roop]=1;
					max_score+=i.w;
					break;
				}
				roop--;
			}
		}
	}
	cout<<max_score<<'\n';
	
	return 0;
}

/*
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

// 유니온 파인드 알고리즘
struct UnionFind
{
	vector<int> parent;
	
	UnionFind(int size): parent(size+1)
	{
		for(int i=0;i<=size;++i)
			parent[i]=i;
	}
	
	int find_parent(int x)
	{
		return (parent[x]==x)?x:parent[x]=find_parent(parent[x]);
	}
};

struct Study
{
	int d;
	int w;
	
	bool operator<(const Study& other) const
	{
		return w>other.w;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int max_d=0;
	
	cin>>n;
	vector<Study> score(n);
	for(auto& a:score)
	{
		cin>>a.d>>a.w;
		max_d=max(max_d,a.d);
	}
	
	sort(score.begin(),score.end());
	
	UnionFind uf(max_d);
	long long max_score=0;
	for(const auto& a:score)
	{
		int available_day=uf.find_parent(a.d);
		if(available_day>0)
		{
			max_score+=a.w;
			uf.parent[available_day]=available_day-1;
		}
	}
	cout<<max_score<<'\n';
	
	return 0;
}
*/
