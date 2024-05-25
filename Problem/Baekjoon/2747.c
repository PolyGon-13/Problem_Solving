#include <stdio.h>

int n[46];

int fibo(int x)
{
	n[0]=0;
	n[1]=1;
	int a;
	
	for(a=2;a<=x;a++)
		n[a]=n[a-1]+n[a-2];
	
	return n[x];
}

int main()
{
	int num,result;
	scanf("%d",&num);
	
	result=fibo(num);
	printf("%d\n",result);
	
	return 0;
}

// 10870번처럼 풀면 시간초과 발생
// Dynamic Programming(동적 계획법)을 이용
// 정적배열, 동적배열, 시간복잡도 개념

// 배열을 이용하면 시간이 훨씬 단축되므로, 이러한 문제를 풀 때는 배열을 사용할 것!
