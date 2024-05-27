// 기존에 작성했던 코드처럼 while문을 사용하고는 있지만 배열을 이용하여 효율적인 방식으로 작동하고 있음.
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
