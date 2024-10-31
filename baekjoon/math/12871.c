#include <stdio.h>
#include <string.h>

int gcd(int a,int b) // 최대공약수
{
	while(b!=0) // 아래 알고리즘대로 진행하면 최대공약수에 도달하면 b는 0이 됨
	{
		int temp=b;
		b=a%b; // a와 b의 대소관계에 상관없이 작은 수가 b로 가게 되어 있음
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
		// 1번 strcpy를 실행할 때마다 s의 길이 len만큼 배열의 공간을 차지함
		// result는 0번째 인덱스를 항상 가리키므로, (반복횟수)*(문자열 길이)를 더해주어 문자열 반복 붙이기를 진행
	
	result[times*len]='\0'; // 마지막 요소에는 문자열의 끝을 알리는 \0 넣음 (strcmp는 \0를 기준으로 문자열을 비교하기 때문)
}

int string_equal(const char *s1,const char *s2)
{
	// 두 문자열을 반복하였을 때 동일 길이가 되는 시점은 최소공배수만큼 진행하였을 때임
	int len1=strlen(s1);
	int len2=strlen(s2);
	
	int lcm=(len1*len2)/gcd(len1,len2); 
	// 유클리드 호제법 (최소공배수 구하기)
	// 두 수 a와 b의 최소공배수는 (a*b)/(a와 b의 최대공약수)
	
	char repeat_s1[lcm+1];
	char repeat_s2[lcm+1]; 
	// 최소공배수만큼의 길이를 가지는 문자열을 만들기 위함
	
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
