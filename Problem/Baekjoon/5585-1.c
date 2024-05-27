// 직접 쓴 코드이고 정답이지만 while문의 남발로 코드가 보기 좋지 않기에 5585-2.c에 다른 예시를 첨부함.
#include <stdio.h>

#define pay 1000

int main()
{
	int n;
	int cnt=0;
	int changes=0;
	scanf("%d",&n);
	
	changes=pay-n;
	
	if(changes>=500)
	{
		changes-=500;
		cnt++;
	}
	
	while(changes>=100)
	{
		changes-=100;
		cnt++;
	}
	
	while(changes>=50)
	{
		changes-=50;
		cnt++;
	}
	
	while(changes>=10)
	{
		changes-=10;
		cnt++;
	}
	
	while(changes>=5)
	{
		changes-=5;
		cnt++;
	}
	
	while(changes>=1)
	{
		changes-=1;
		cnt++;
	}
	
	printf("%d\n",cnt);
	
	return 0;
}
