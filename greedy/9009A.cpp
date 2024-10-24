#include <iostream>
#include <vector>

using namespace std;

vector<int> gen_fibo(int n)
{
	int x;
	vector<int> fibo={0,1};
	
	while(1)
	{
		x=fibo[fibo.size()-1]+fibo[fibo.size()-2];
		if(x>n) break;
		fibo.emplace_back(x);
	}
	
	return fibo;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,n;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		vector<int> fibo=gen_fibo(n);
		vector<int> res;
		
		for(int i=fibo.size()-1;i>=0;--i)
		{
			if(fibo[i]<=n)
			{
				res.emplace_back(fibo[i]);
				n-=fibo[i];
			}
			if(n==0) break;
		}
		
		for(int i=res.size()-1;i>=0;--i)
			cout<<res[i]<<" ";
		cout<<'\n';
	}
	
	return 0;
}
