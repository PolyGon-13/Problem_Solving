#include <stdio.h>

int main()
{
	int a[100][100];
	int b[100][100];
	
	int i,j,p;
	int n,m,k;
	int sum=0;
	
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	
	scanf("%d %d",&m,&k);
	for(i=0;i<m;i++)
		for(j=0;j<k;j++)
			scanf("%d",&b[i][j]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			sum=0;
			for(p=0;p<m;p++)
				sum+=a[i][p]*b[p][j]; // 행렬의 곱셈 계산 (a행렬의 열과 b행렬의 행을 곱합)
			
			printf("%d ",sum);
		}
		putchar('\n');
	}
	
	return 0;
}
