#include <stdio.h>
#include <string.h>

// int s[21]; 
// 전역배열로 설정하면 자동으로 요소들이 0으로 초기화되므로 전역배열로 설정해도 정답

int main()
{
	int s[21]={0,}; // 0으로 초기화해두는 것이 중요했던 문제
	int i,m;
	scanf("%d",&m);
	
	char cmd[7];
	int x;
	while(m--)
	{
		scanf("%s",cmd);
		
		if(!strcmp(cmd,"add"))
		{
			scanf("%d",&x);
			s[x]=1;
		}
		else if(!strcmp(cmd,"remove"))
		{
			scanf("%d",&x);
			s[x]=0;
		}
		else if(!strcmp(cmd,"check"))
		{
			scanf("%d",&x);
			if(s[x])
				puts("1");
			else
				puts("0");
		}
		else if(!strcmp(cmd,"toggle"))
		{
			scanf("%d",&x);
			if(s[x])
				s[x]=0;
			else
				s[x]=1;
		}
		else if(!strcmp(cmd,"all"))
		{
			for(i=1;i<=20;i++)
				s[i]=1;
		}
		else if(!strcmp(cmd,"empty"))
		{
			for(i=1;i<=20;i++)
				s[i]=0;
		}
	}
	
	return 0;
}
