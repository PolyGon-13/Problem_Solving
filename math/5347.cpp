#include <iostream>

using namespace std;

long long gcd(long long a,long long b)
{
	long long A,B;
	
	if(a>b)
	{
		A=a;
		B=b;
	}
	else
	{
		A=b;
		B=a;
	}
	
	if(B==0)
		return A;
	
	return gcd(B,A%B);
}

long long lcm(long long a,long long b)
{
	return (a*b)/gcd(a,b);
}

int main()
{
	long long n,a,b;
	cin>>n;
	
	int gcd;
	while(n--)
	{
		cin>>a>>b;
		cout<<lcm(a,b)<<endl;
	}
	
	return 0;
}

/*
#include <iostream>

using namespace std;

long long t,a,b;

long long gcd(long long a,long long b)
{
	if(a<b) return gcd(a,b%a);
	if(b==0) return a;
	return gcd(b,a%b);
}

int main()
{
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b;
		cout<<(a*b)/gcd(a,b)<<endl;
	}

 return 0;
}
*/
