#include <stdio.h>

int factorial(int n)
{
	int result=1;
	while(n>1)
	{
		result*=n;
		n--;
	}
	return result;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d\n",factorial(n));
	
	return 0;
}
// [ 1 1 2 2 3 3 ] 처럼 같은 수는 붙어있는 경우에 점수는 최솟값을 가짐
