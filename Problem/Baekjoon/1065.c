#include <stdio.h>

int main()
{
	int i;
	int n,a,b,c,d1,d2;
	int cnt=99; // 1부터 99까지는 두 자리 숫자이므로 등차수열 성립
	scanf("%d",&n);
	
	if(n<100)
		printf("%d\n",n);
	else
	{
		for(i=100;i<=n;i++) // 1부터 99까지는 한수이므로 100부터 반복시작
		{
			a=i%10;
			b=i/10%10;
			c=i/100;
			d1=a-b;
			d2=b-c;

			if(d1==d2)
				cnt++;
		}
		printf("%d\n",cnt);
	}
	
	return 0;
}
