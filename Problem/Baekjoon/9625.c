#include <stdio.h>

#define SIZE 46

typedef struct
{
	int cnt_a;
	int cnt_b;
} node;

node dp[SIZE];

void init_dp()
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		dp[i].cnt_a=0;
		dp[i].cnt_b=0;
	}
}

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
