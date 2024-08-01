#include <stdio.h>

#define SIZE 46

typedef struct
{
	int cnt_a;
	int cnt_b;
} node;

node dp[SIZE];

/*
// 참고한 코드에 포함되어 있었는데 해당 문제에는 필요없어 보임
void init_dp()
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		dp[i].cnt_a=0;
		dp[i].cnt_b=0;
	}
}
*/

node dynamic(int n)
{
	if(n==0)
	{
		node tmp;
		tmp.cnt_a=1;
		tmp.cnt_b=0;
		return tmp;
	}
	
	if(n==1)
	{
		node tmp;
		tmp.cnt_a=0;
		tmp.cnt_b=1;
		return tmp;
	}
	
	if(dp[n].cnt_a!=0 || dp[n].cnt_b!=0)
		return dp[n];
	
	node tmp_1,tmp_2;
	tmp_1=dynamic(n-1);
	tmp_2=dynamic(n-2);
	
	dp[n].cnt_a=tmp_1.cnt_a+tmp_2.cnt_a;
	dp[n].cnt_b=tmp_1.cnt_b+tmp_2.cnt_b;
	// k가 1인 경우부터 쭉 나열해보면 피보나치 수열처럼 k=0, k=1일 때의 a와 b의 개수를 더하면 k=2인 경우임
	// 재귀함수를 이용해서 아래로 뻗어나간 후 위로 더해주면 해당 과정을 수행할 수 있음
	
	return dp[n];
}

int main() 
{
	int n,m;
	node tmp;
	scanf("%d",&n);
	
	tmp=dynamic(n);
	
	printf("%d %d\n",tmp.cnt_a,tmp.cnt_b);
	
	return 0;
}
