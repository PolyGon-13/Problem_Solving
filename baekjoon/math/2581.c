#include <stdio.h>

int is_prime(int num)
{
	int k;
	
	if(num<=1) return 0;
	else if(num==2) return 1;
	
	if(num%2==0) return 0;
	
	for(k=3;k*k<=num;k+=2)
	{
		if(num%k==0) return 0;
	}
	
	return 1;
}
// 어떤 자연수가 소수인지 아닌지 판별하기 위해서는 2부터 그 수의 제곱근까지 나누어본다.

void find(int m, int n)
{
	int i,j;
	int cnt=0;
	int sum=0;
	int pn[10000];
	
	for(i=m;i<=n;i++)
	{
		if(is_prime(i))
		{
			pn[cnt]=i;
			sum+=i;
			cnt++;
		}
	}
	
	if(sum==0) printf("-1\n");
	else
	{
		printf("%d\n",sum);
		printf("%d\n",pn[0]);
	}
}

int main()
{
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	
	find(m,n);
	
	return 0;
}
