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
			num=num*a%10; // int를 초과할 수 있기에 나머지 연산 이용
		
		if(num%10==0)
			printf("%d\n",10);
		else
			printf("%d\n",num%10);
	}
	
	return 0;
}
