#include <stdio.h>

#define minFinder(a,b) a<b ? a : b

int main()
{
	char board[50][50];
	int i,j,a,b;
	int n,m;
	int min=80;
	int cntB=0,cntW=0;
	
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%s",board[i]);
	
	for(i=0;i<n-7;i++) // 오른쪽 아래 점을 (x,y)라고 했을 때 (x-7,y-7)이 가장 마지막 첫 시작점
		for(j=0;j<m-7;j++)
		{
			cntB=0;
			cntW=0;
			for(a=i;a<i+8;a++) // 지정한 점을 기준으로 8x8 체스판 설정
				for(b=j;b<j+8;b++)
				{
					if((a+b)%2==0) // 시작점이 짝수인 경우
					// 흰색과 검은색이 번갈아 나타나므로 짝수번호는 흰색, 홀수번호는 검은색 등과 같은 방법으로 구분 가능
					{
						if(board[a][b]=='B')
							cntW++;
						else
							cntB++;
					}
					else // 시작점이 홀수인 경우
					{
						if(board[a][b]=='B')
							cntB++;
						else
							cntW++;
					}
				}
			// 첫 시작은 흰색인 경우와 검은색인 경우 2가지가 존재
			// if-else문 안에 if-else문을 넣어 2가지 경우에 대한 모든 경우을 카운트
			min=minFinder(min,cntB);
			min=minFinder(min,cntW);
		}
	printf("%d\n",min);
	
	return 0;
}
