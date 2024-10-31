#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,x,y,a,b;
	
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		cin>>a>>b;
		
		int abs_x=abs(x);
		int abs_y=abs(y);
		int pay=0;
		
		if(x*y>0)
		{
			int max_num=max(abs_x,abs_y);
			int min_num=min(abs_x,abs_y);
			
			pay+=min_num*b;
			pay+=(max_num-min_num)*a;
		}
		else
		{
			pay+=abs_x*a;
			pay+=abs_y*b;
		}
		cout<<pay<<'\n';
	}
	
	return 0;
}
