#include <stdio.h>

int main()
{
	int t,a,b,num;
	int i,j;
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a,&b);
		num=a;
		
		for(j=1;j<b;j++)
			num=num*a%10; 
		// int를 초과할 수 있기 때문에 나머지 연산 이용
		// 이 코드에서 필요한 것은 계산값의 일의 자리수이기 때문에 10으로 나눈 나머지만 남겨두는 것
		
		if(num%10==0)
			printf("%d\n",10);
		else
			printf("%d\n",num%10);
	}
	
	return 0;
}
