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
	
	for(i=0;i<n-7;i++)
		for(j=0;j<m-7;j++)
		{
			cntB=0;
			cntW=0;
			for(a=i;a<i+8;a++)
				for(b=j;b<j+8;b++)
				{
					if((a+b)%2==0)
					{
						if(board[a][b]=='B')
							cntW++;
						else
							cntB++;
					}
					else{
						if(board[a][b]=='B')
							cntB++;
						else
							cntW++;
					}
				}
			min=minFinder(min,cntB);
			min=minFinder(min,cntW);
		}
	printf("%d\n",min);
	
	return 0;
}
