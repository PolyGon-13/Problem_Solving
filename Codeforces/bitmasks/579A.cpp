#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x;
	
	cin>>x;
	bitset<32> binaray(x);
	
	int cnt=binaray.count(); // 1의 개수를 count
	cout<<cnt<<'\n';
	
	return 0;
}

/*
// 비트 연산으로 직접 구하기
#include <iostream>
#include <bitset>

using namespace std;

int count_one(int x)
{
	int cnt=0;
	
	while(x>0)
	{
		cnt+=x&1;
		x>>=1;
	}
	
	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x;
	
	cin>>x;
	int cnt=count_one(x);
	cout<<cnt<<'\n';
	
	return 0;
}
*/
