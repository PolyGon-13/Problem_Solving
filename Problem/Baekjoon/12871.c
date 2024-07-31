#include <stdio.h>
#include <string.h>

int gcd(int a,int b)
{
	while(b!=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	
	return a;
}

void repeat_string(const char *s,int times,char *result)
{
	int i;
	int len=strlen(s);
	for(i=0;i<times;++i)
		strcpy(result+i*len,s);
	
	result[times*len]='\0';
}

int string_equal(const char *s1,const char *s2)
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	
	int lcm=(len1*len2)/gcd(len1,len2);
	
	char repeat_s1[lcm+1];
	char repeat_s2[lcm+1];
	
	repeat_string(s1,lcm/len1,repeat_s1);
	repeat_string(s2,lcm/len2,repeat_s2);
	
	return strcmp(repeat_s1,repeat_s2)==0;
}

int main() 
{
	char s[51],t[51];
	scanf("%s %s",s,t);
	
	if(string_equal(s,t))
		puts("1");
	else
		puts("0");	
	
	return 0;
}
