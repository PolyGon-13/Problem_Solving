// 주어진 경우의 수를 전부 따져가면서 판단해야 하는 문제
#include <stdio.h>
#include <string.h>

int main() 
{
	int i;
	int cnt=0;
	char word[100];
	
	scanf("%s",&word);
	
	for(i=0;i<strlen(word);i++)
	{
		cnt++;
		if(word[i]=='=')
		{
			if(word[i-1]=='c' || word[i-1]=='s') cnt--;
			if(word[i-1]=='z')
			{
				cnt--;
				if(word[i-2]=='d') cnt--;
			}
		}
		
		if(word[i]=='-')
		{
			if(word[i-1]=='c' || word[i-1]=='d') cnt--;
		}
		
		if(word[i]=='j')
		{
			if(word[i-1]=='l' || word[i-1]=='n') cnt--;
		}
	}
	
	printf("%d\n",cnt);
	return 0;
}
