#include <iostream>

#define PI 3.141592

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int d1,d2;
	float res;
	
	cin>>d1>>d2;
	
	cout<<fixed;
	cout.precision(6); // 소수점 아래 자릿수 고정
	
	res=2*(d1+PI*d2);
	cout<<res<<'\n';
	
	return 0;
}
