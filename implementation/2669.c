#include <stdio.h>

int map[101][101]={0};

int main()
{
	int a,b,c,d;
	int sum=0;
	
	int i,j,k;
	for(i=0;i<4;i++)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		for(j=a;j<c;j++)
		{
			for(k=b;k<d;k++)
				map[j][k]=1;
		}
	}
	
	for(i=0;i<101;i++)
		for(j=0;j<101;j++)
			if(map[i][j]==1)
				sum++;
	printf("%d\n",sum);
	
	return 0;
}
// 직사각형의 면적을 단순 넓이 계산이 아닌 구역을 차지했는지 여부로 해결하는 문제
