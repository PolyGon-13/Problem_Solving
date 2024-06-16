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
	
	if(a[0]>='0' && a[0]<='9')
		FizzBuzz(atoi(a)+3);
	else if(b[0]>='0' && b[0]<='9')
		FizzBuzz(atoi(b)+2);
	else if(c[0]>='0' && c[0]<='9')
		FizzBuzz(atoi(c)+1);
	else
		result[0]='\0';
	
	return 0;
}
