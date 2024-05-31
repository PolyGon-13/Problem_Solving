#include <stdio.h>

int judgment(int i)
{
	int judge=0;
	int j;
	
	for(j=1;j<=i;j++) // j가 1부터 i/2까지만 반복하면 될 줄 알았으나 1이라는 경우가 있기에 i까지 반복해야 하는 것 같다.
	{
		if(j*j==i)
		{
			judge=1;
			break;
		}
		else judge=0;
	}
	
	return judge;
}

int main()
{
	int m,n;
	int i;
	int cnt=0;
	int sum=0;
	scanf("%d",&m);
	scanf("%d",&n);
	int num[10000];
	
	for(i=m;i<=n;i++)
	{
		if(judgment(i)) 
			num[cnt++]=i;
	}
	
	if(cnt==0) printf("-1\n");
	else
	{
		for(i=0;i<=cnt;i++)
			sum+=num[i];
		printf("%d\n",sum);
		printf("%d\n",num[0]);
	}
}

// 루트 씌워서 자연수이면 완전제곱수
// 1부터 n/2까지 제곱한 값이 n이면 완전제곱수
