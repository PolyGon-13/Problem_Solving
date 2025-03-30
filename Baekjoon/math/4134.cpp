#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

bool isPrime(ll n)
{
	if(n<2) return false;
	
	int sqrtN=sqrt(n);
	for(ll i=2;i<=sqrtN;i++)
		if(n%i==0) return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		
		while(!isPrime(n))
			n++;
		cout<<n<<'\n';
	}
	
	
	return 0;
}

/*
// 에라토스네스의 체를 이용한 방법
// But 수가 너무 커서 오버되서 사용 불가능
const long long MAX=4000000000;
vector<bool> isPrime(MAX+1,true);

void sieve()
{
	isPrime[0]=isPrime[1]=false;
	for(long long i=2;i*i<=MAX;i++)
	{
		if(isPrime[i])
		{
			for(long long j=i*i;j<=MAX;j+=i)
				isPrime[j]=false;
		}
	}
}

long long nextPrime(long long n)
{
	for(long long i=n+1;i<=MAX;i++)
		if(isPrime[i]) return i;
	
	return -1;
}
*/
