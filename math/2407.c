#include <stdio.h>

long long arr[101][101][2];
// longlong의 범위 => –9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 (19자리)

int main()
{
	int n,m;
	int i,j;
	scanf("%d %d",&n,&m);
	
	for(i=1;i<=n;i++) // nCm의 n 메모제이션
		for(j=0;j<=i;j++) // nCm의 m
		{
			if(j==0||j==i)
				arr[i][j][0]=1;
			// arr[n][m][0]만 해주는이유는 arr[n][m][1]은 100C50의 값이 30자리기때문
			// 18자리정도에서 자르고 그이후부터 arr[n][m][1]에 저장
			else
			{
				arr[i][j][0]=arr[i-1][j-1][0]+arr[i-1][j][0];
				arr[i][j][1]=arr[i-1][j-1][1]+arr[i-1][j][1];
			}
			if(arr[i][j][0]>=100000000000000000)
			{
				arr[i][j][1]++; // 17자리 수부터는 여기에 저장
				arr[i][j][0]%=100000000000000000; // 맨 앞자리 날리고 그앞자리는 arr[i][j][1]에 더함
			}
		}
	
	if(arr[n][m][1]==0)
		printf("%lld\n",arr[n][m][0]);
	else
		printf("%lld%lld\n",arr[n][m][1],arr[n][m][0]);
	
	return 0;
}
// 메모제이션
