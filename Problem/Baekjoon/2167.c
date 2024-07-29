#include <stdio.h>

int main() 
{
	int a,b;
	int n,m,k,i,j,x,y;
	scanf("%d %d",&n,&m);
	
	int arr[n][m];
	/*
 	// 2차원 배열 동적할당
	int **arr=(int **)malloc(sizeof(int *)*n);
	for(a=0;a<n;a++)
		arr[a]=(int *)malloc(sizeof(int)*m);
	*/  

	
	for(a=0;a<n*m;a++)
		scanf("%d",&arr[a/m][a%m]);
		// 하나의 열(m)이 모두 채워져야 다음 행(n)으로 넘어갈 수 있음
		// n*m은 모든 배열 요소의 개수이므로 a/m은 모든 열을 지난 후 다음 행으로 넘어감
		// a%m은 점점 증가하다가 열의 끝에 도달하면 0으로 바뀌어 다시 증가함
	
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d %d %d %d",&i,&j,&x,&y);
		int sum=0;
		
		for(a=i;a<=x;a++)
			for(b=j;b<=y;b++)
				sum+=arr[a-1][b-1];
		
		printf("%d\n",sum);
	}

	/*
 	// 2차원 배열 동적할당 해제
	for(a=0;a<n;a++)
		free(arr[a]);
	free(arr);
	*/ 
	
	return 0;
}
