#include <iostream>

using namespace std;

long long a,b,c,k;

long long p(long long b)
{
	if(b==0) return 1;
	if(b==1) return a%c;
	
	k=p(b/2)%c;
	
	if(b%2==0) return k*k%c;
	else return (k*k%c)*(a%c);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>a>>b>>c;
	cout<<p(b)%c<<'\n';
	
	return 0;
}
