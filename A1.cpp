#include <iostream>
#include <climits>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b,c,d;
	int max_x=INT_MIN,min_x=INT_MAX;
	int max_y=INT_MIN,min_y=INT_MAX;
	
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c>>d;
		
		if(a<min_x) min_x=a;
		if(b<min_y) min_y=b;
		if(c>max_x) max_x=c;
		if(d>max_y) max_y=d;
		
		cout<<2*(max_x-min_x)+2*(max_y-min_y)<<'\n';
	}

	return 0;
}
// 중앙대. 울타리 공사
