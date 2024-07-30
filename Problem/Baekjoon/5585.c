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

// 위 코드는 직접 작성하였고 정답이지만 while문의 남발로 코드가 보기 좋지 않음
// 기존에 작성했던 코드처럼 while문을 사용하고는 있지만 배열을 이용하여 효율적인 방식으로 작동하고 있음
/*
#include <stdio.h>

void change()
{
	int coin[6]={500,100,50,10,5,1};
	int cnt=0;
	int n;
	int i=0;
	
	scanf("%d",&n);
	
	n=1000-n;
	
	while(n>0)
	{
		if(n>=coin[i])
		{
			n-=coin[i];
			cnt++;
		}
		else
			i++;
	}
	
	printf("%d\n",cnt);
}

int main()
{
	change();
	
	return 0;
}
*/
