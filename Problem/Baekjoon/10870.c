// 피보나치 수
#include <stdio.h>

int fibo(int n)
{
	if(n>=2)
		return fibo(n-1)+fibo(n-2); // 피보나치 수의 식에 의해 다음 값을 return
	else if(n==1) return 1; // 1번째 수는 1이므로 return 1;
	else return 0; // 0번째 수는 0이므로 return 0;
}

int main()
{
	int n;
	scanf("%d",&n);	
	printf("%d\n",fibo(n));	
	return 0;
}
