#include <stdio.h>
#include <stdlib.h>

int sort(int score[],int n)
{
	int i,j;
	int temp;
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(score[i]<score[j])
			{
				temp=score[i];
				score[i]=score[j];
				score[j]=temp;
			}
		}
	}
}

int main()
{
	int n,k;
	int i;
	scanf("%d %d",&n,&k);
	
	int* score=calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
		scanf("%d",&score[i]);
	
	sort(score,n);
	
	printf("%d\n",score[k-1]);
	
	return 0;
}
