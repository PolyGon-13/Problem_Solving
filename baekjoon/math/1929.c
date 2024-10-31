#include <stdio.h>

int main()
{
	int num[1000001]={1,1,0};
	int i,j;
	int m,n;
	scanf("%d %d",&m,&n);
	
	for(i=2;i<=n;i++)
		if(num[i]==0)
			for(j=2;i*j<=n;j++)
				num[i*j]=1;
	// 특정 수의 배수를 모두 지우는 과정
	
	for(i=m;i<=n;i++)
		if(num[i]==0)
			printf("%d\n",i);
	
	return 0;
}
// '에라토스테네스의 체'를 이용하여 푸는 문제
// 범위 내의 소수를 구하는 방법 중에는 가장 빠르다고 함


// 모든 수를 나눠서 소수를 구하는 가장 기본적인 방법을 사용해보았지만 역시나 시간초과
/*
#include <stdio.h>

int main()
{
	int i,j;
	int n,m;
	int flag;
	scanf("%d %d",&n,&m);
	
	for(i=n;i<m;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				flag=1;
		}
		if(!flag)
			printf("%d\n",i);
	}
	
	return 0;
}
*/
