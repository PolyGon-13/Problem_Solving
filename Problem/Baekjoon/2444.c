#include <stdio.h>

int main()
{
	int i,j,k;
	int n,f;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
			printf(" ");
		for(k=0;k<=2*i;k++)
			printf("*");
		putchar('\n');
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<=i;j++)
			printf(" ");
		for(k=0;k<=2*(n-2-i);k++) 
			printf("*");
			// 역삼각형의 가장 아랫줄에서 별의 개수는 2*(n-2)개
			// 한 줄씩 올라갈 때마다 별의 개수가 2개씩 줄어드므로 2*(n-2-i)로 설정
		putchar('\n');
	}

	return 0;
}
