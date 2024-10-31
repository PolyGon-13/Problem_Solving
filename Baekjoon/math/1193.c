// 구현보다는 제시된 문제를 수학을 통해 풀이하는 것이 중심
#include <stdio.h>

int main()
{
	int i;
	int x;
	scanf("%d",&x);
	
	int n=1;
	while(1)
	{
		if(n*(n-1)/2<x && x<=n*(n+1)/2)
			break;
		n++;
	}
	// 대각선 방향이 바뀌는 것을 기준으로 수를 정리하면 대각선마다 요소의 개수가 1씩 늘어나는 것을 알 수 있음
	// 이는 첫째항이 1이고 공차가 1인 등차수열이기에 위의 while문처럼 공식을 활용하여 행을 구할 수 있음
	
	int num;
	if(n%2!=0)
	{
		num=n*(n+1)/2-x; // 해당 행의 몇 번째 요소인지 계산(역순 숫자)
		printf("%d/%d\n",1+num,n-num);
	}
	else if(n%2==0)
	{
		num=n*(n+1)/2-x;
		printf("%d/%d\n",n-num,1+num);
	}
	
	return 0;
}
