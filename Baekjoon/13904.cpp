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
