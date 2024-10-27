#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int k;
	int chco_size=1;
	int pow_size=0;
	
	cin>>k;
	// k보다 크거나 같은 최소의 2의 거듭제곱 찾기
	while(chco_size<k)
	{
		chco_size<<=1; // chco_size를 왼쪽으로 1비트 시프트하여 2배로 만듦
		pow_size++;
	}
	// pow 함수는 부동소수점 연산을 이용해 제곱을 계산하기 때문에 정확한 결과를 얻지 못할 가능성이 높음
	
	int cnt=0;
	int tmp=k;
	// k의 이진 표현에서 1의 개수 세기
	while(tmp>0)
	{
		if(tmp&1) // 0001과 & 연산 수행. 가장 낮은 비트가 1인 경우
			cnt++;
		tmp>>=1; // 오른쪽으로 1비트 시프트하여 다음 비트 검사 준비
	}
	
	int res=0;
	if((k&(k-1))==0) 
	// 2의 거듭제곱인 수는 한 개의 1과 나머지는 0으로 존재
	// k와 k-1을 이진수로 표현하면 8은 1000, 7은 0111처럼 정반대의 형태로 존재
		res=0;
	else
	{
		int min_bit_pos=0;
		tmp=k;
		
		// 비트가 1인 최소 위치 찾기
		while((tmp&1)==0) // 가장 낮은 비트가 0인 동안 반복
		{
			tmp>>=1;
			min_bit_pos++;
		}
		res=pow_size-min_bit_pos;
	}
	cout<<chco_size<<" "<<res<<'\n';
	
	return 0;
}
