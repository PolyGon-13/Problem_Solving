#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,n,k;
	int cnt=0;
	int num[1001]={0,};
	scanf("%d %d",&n,&k);
	
	for(i=2;i<=n;i++)
	{
		if(num[i]==0)
		{
			cnt++;
			if(cnt==k)
				printf("%d\n",i);
			for(j=i*i;j<=n;j+=i) 
			// j=2*i로 시작하면 될 것이라 생각했지만 i*2, i*3, i*4 등의 수들은 이전의 과정에서 지워졌을 가능성이 크기 때문에 
			// i*i부터 시작하면 보다 효율적으로 지워나갈 수 있음
			{
				if(num[j]==0)
				{
					num[j]=1;
					cnt++;
					if(cnt==k)
						printf("%d\n",j);
				}
			}
		}
	}
	
	return 0;
}

// 에라토스테네스의 체
