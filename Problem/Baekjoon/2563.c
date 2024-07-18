#include <stdio.h>

int main()
{
	int i,j,k,x,y;
	int arr[100][100]={0,};
	int a,b,n;
	int cnt=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++) // 색종이의 수
	{
		scanf("%d %d",&a,&b); // 정사각형의 왼쪽 아래 꼭짓점의 좌표 
		for(j=0;j<10;j++) // 색종이는 10x10 크기이므로 j,k를 이용해 해당 크기 설정
		{
			for(k=0;k<10;k++)
			{
				arr[a+j][b+k]=1;
			}
		}
	}
	
	for(int x=0;x<100;x++)
	{
		for(y=0;y<100;y++)
		{
			if(arr[x][y]==1)
				cnt++;
		}
	}
	printf("%d\n",cnt);
	
	return 0;
}
// 직사각형의 넓이 공식을 어떻게 적용해야 하는가에 대해서만 생각했음
// 겹치는 부분 생각할 것 없이 100x100 종이를 2차원 배열로 선언하고 해당하는 영역의 요소를 1로 바꿔주기만 하면 해결되는 문제였음
