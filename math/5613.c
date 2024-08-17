#include <stdio.h>

int main() 
{
	long long num;
	char mark;
	long long result=0;
	
	
	scanf("%lld",&num);
	result=num;
	
	while(1)
	{
		scanf("%s",&mark);
		if(mark=='=')
			break;
		scanf("%lld",&num);
		
		switch(mark)
		{
			case '+':
				result+=num;
				break;
			case '-':
				result-=num;
				break;
			case '*':
				result*=num;
				break;
			case '/':
				result/=num;
				break;
		}
	}
	printf("%lld\n",result);
	
	return 0;
}
