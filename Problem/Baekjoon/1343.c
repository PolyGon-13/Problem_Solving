#include <stdio.h>
#include <string.h>

int main() 
{
	int i;
	char arr[51]={0,};
	scanf("%s",arr);
	int len=strlen(arr);
	int flag=0;
	
	for(i=0;i<len;i++)
	{
		if((len-3>=0) && arr[i]=='X' && arr[i+1]=='X' && arr[i+2]=='X' && arr[i+3]=='X')
		{
			arr[i]='A';
			arr[i+1]='A';
			arr[i+2]='A';
			arr[i+3]='A';
		}
		else if((len-1>=0) && arr[i]=='X' && arr[i+1]=='X')
		{
			arr[i]='B';
			arr[i+1]='B';
		}
		continue;
	}
	
	for(i=0;i<len;i++)
	{
		if(arr[i]=='X') // 위의 for문을 거쳐왔는데 X가 존재한다는 것은 조건에 만족하지 않는다는 의미
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
		puts("-1");
	else
	{
		for(i=0;i<len;i++)
			printf("%c",arr[i]);
		putchar('\n');
	}
	
	return 0;
}
