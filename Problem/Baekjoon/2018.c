#include <stdio.h>

int main()
{
	int i,j;
	int n;
	int cnt=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(n==i*j+j*(j-1)/2) // i부터 i+j-1까지의 합
			{
				cnt++;
				break;
			}
			else if(n<i*j+j*(j-1)/2)
				break;
		}
	}
	printf("%d\n",cnt);
	
	return 0;
}
// 등차수열의 합 공식 (항상 기억!!!)
// 모든 경우의 수를 따져봐야하는 문제인듯
