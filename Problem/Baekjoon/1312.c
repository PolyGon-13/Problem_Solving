#include <stdio.h>

int main()
{
	int a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	
	int i;
	int result;
	for(i=0;i<n;i++)
	{
		a%=b;
		a*=10;
		result=a/b;
	}
	printf("%d\n",result);
	
	return 0;
}
// 나눗셈의 기본적인 원리에 입각한 문제
// 주어진 수를 나누는 수로 나누고 나눌 수 없다면 나머지에 10을 곱하고 소수점 영역으로 들어가게 됨
