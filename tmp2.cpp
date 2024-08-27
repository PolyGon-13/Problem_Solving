#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b,c;
	int num=1;
	bool flag=true;
	vector<int> ans(2000000);
	ans[num++]=1;
	
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		flag=true;
		if(a==1)
		{
			for(int i=b;i<=c;i++)
			{
				if(!ans[i])
				{
					flag=false;
					ans[num++]=0;
					break;
				}
			}
			if(flag)
			{
				ans[num++]=1;
				cout<<"Yes"<<'\n';
			}
			else
				cout<<"No"<<'\n';
		}
		else if(a==2)
		{
			for(int i=b;i<=c;i++)
			{
				if(ans[i])
				{
					flag=false;
					ans[num++]=0;
					break;
				}
			}
			if(flag)
			{
				ans[num++]=1;
				cout<<"Yes"<<"\n";
			}
			else
				cout<<"No"<<'\n';
		}
	}
	
	return 0;
}

// b번 질문은 계속돼
