#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	int size[7];
	for(i=0;i<6;i++)
		scanf("%d",&size[i]);
	
	int t,p;
	scanf("%d %d",&t,&p);
	
	int cnt=0;
	for(i=0;i<6;i++)
		cnt+=(size[i]+t-1)/t; // 올림 나눗셈
	
	printf("%d\n",cnt);
	printf("%d %d\n",n/p,n%p);
	
	return 0;
}

// 원래 배열 안의 요소들을 검사하는 방법으로 while문을 사용하였지만 시간초과
/*
for(i=0;i<6;i++)
{
	while(size[i]>0)
	{
		cnt++;
		size[i]-=t;
	}
}
*/
