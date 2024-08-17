#include <stdio.h>
#include <string.h>

char str[1000001];

int main() 
{
	int i;
	int cnt0=0,cnt1=0;
	char prev='\0';
	
	scanf("%s",str);
	int len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(str[i]!=prev)
		{
			if(str[i]=='0')
				cnt0++;
			else
				cnt1++;
		}
		prev=str[i];
	}
	printf("%d\n",(cnt0<cnt1)?cnt0:cnt1);
	
	return 0;
}
// prev에 이전 문자열을 담아 동일한지 판단
// cnt0과 cnt1에 0과 1의 묶음을 저장하여 최종 결과 출력

// 내가 직접 작성한 코드이지만 오답
// 1001 과 같이 tag에 들어간 수가 문자열의 마지막 수일 경우 box의 값이 제대로 증가하지 않는 문제가 발생함
/*
#include <stdio.h>
#include <string.h>

char str[1000001];

int main() 
{
	int i;
	int cnt0=0,cnt1=0,box=0,flag=0;
	scanf("%s",str);
	int len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(str[i]=='0')
			cnt0++;
		else if(str[i]=='1')
			cnt1++;
	}
	char tag=(cnt0>cnt1)?'0':'1';
	
	for(i=0;i<len;i++)
	{
		if(str[i]==tag)
			flag=1;
		else if(flag)
		{
			flag=0;
			box++;
		}
	}
	printf("%d\n",box);
	
	return 0;
}
*/
