#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int weight;
	int height;
} big;

int main()
{
	int n;
	scanf("%d",&n);
	
	big* person=(big*)malloc(sizeof(big)*n); // 구조체 메모리 동적 할당 방법 기억
	
	int i,j;
	for(i=0;i<n;i++)
		scanf("%d %d",&person[i].height,&person[i].weight);
	
	int count=0;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(person[i].height<person[j].height)
			{
				if(person[i].weight<person[j].weight)
					count++; // 자신보다 덩치 큰 사람 있을 때만 count++
			}
		}
		printf("%d ",count+1);
	}
	putchar('\n');
	
	free(person); // malloc으로 메모리 할당을 하였으면 항상 free로 해제해주자!!!
	
	return 0;
}
