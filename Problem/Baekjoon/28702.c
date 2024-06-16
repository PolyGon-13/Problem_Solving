#include <stdio.h>
#include <stdlib.h>

int FizzBuzz(int n)
{
	if(n%15==0)
		printf("FizzBuzz\n");
	else if(n%3==0 && n%5!=0)
		printf("Fizz\n");
	else if(n%3!=0 && n%5==0)
		printf("Buzz\n");
	else
		printf("%d\n",n);
}

int main()
{
	char result[20];
	char a[20],b[20],c[20];
	scanf("%s %s %s",a,b,c);

	// 주어진 문자열들 중 숫자로 된 것이 있다면 해당 수에서 알맞은 수를 더하여 4번째에 배치될 수를 지정
	if(a[0]>='0' && a[0]<='9')
		FizzBuzz(atoi(a)+3); 
	else if(b[0]>='0' && b[0]<='9')
		FizzBuzz(atoi(b)+2);
	else if(c[0]>='0' && c[0]<='9')
		FizzBuzz(atoi(c)+1);
	
	return 0;
}
// atoi는 주어진 문자열을 정수로 변환해주는 함수
