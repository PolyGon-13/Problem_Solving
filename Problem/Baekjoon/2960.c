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
