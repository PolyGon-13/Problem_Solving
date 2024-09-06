#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,a,b,c,d,r1,r2;
	
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>r1>>c>>d>>r2;
		
		double r3=sqrt(pow(c-a,2)+pow(d-b,2));
		double sub=r1>r2?r1-r2:r2-r1;
		
		if(r3==0 && r1==r2)
			cout<<"-1\n";
		else if(r1+r2==r3 || sub==r3)
			cout<<"1\n";
		else if(r3>sub && r3<r1+r2)
			cout<<"2\n";
		else
			cout<<"0\n";
	}
	
	return 0;
}
