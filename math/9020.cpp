#include <iostream>
#include <cmath>

using namespace std;

bool gold_bach(int x)
{
	if(x<2) return false;
	
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,n,a,b;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		a=n/2;
		b=n/2;
		while(1)
		{
			if(gold_bach(a) && gold_bach(b))
			{
				cout<<a<<" "<<b<<'\n';
				break;
			}
			a-=1;
			b+=1;
		}
	}
	
	return 0;
}
