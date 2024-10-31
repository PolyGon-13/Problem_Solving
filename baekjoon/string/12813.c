#include <stdio.h>
#include <stdlib.h>
#define size 100000 
// 10000이 반복되므로 상수로써 선언해두고 사용함
// 주어진 배열의 크기가 10000이었는데 0 하나를 더 붙여서 출력초과 에러 당함

void AND(const char a[],const char b[])
{	
	int i; // 반복되니 전역변수로 빼도 좋을듯
	char* result=calloc(size+1,sizeof(int)); // 출력초과 에러가 메모리 문제라고 생각했어서 추가했던 동적할당
	
	for(i=0;i<size;i++)
	{
		if((a[i]-'0')==(b[i]-'0') && (a[i]-'0')==1) // 문자열 즉, 아스키코드로 저장되어 있기에 숫자로 사용하기 위해 아스키코드 0을 빼준다.
			result[i]=1;
		else
			result[i]=0;
	}
	for(i=0;i<size;i++)
		printf("%d",result[i]);
	free(result);
	putchar('\n');
  // 18~21행은 다른함수들에서도 반복되니 다른 함수로 빼도 좋을듯
}

void OR(const char a[],const char b[])
{
	int i;
	char* result=calloc(size+1,sizeof(int));
	
	for(i=0;i<size;i++)
	{
		if((a[i]-'0')==(b[i]-'0') && (a[i]-'0')==0)
			result[i]=0;
		else
			result[i]=1;
	}
	for(i=0;i<size;i++)
		printf("%d",result[i]);
	free(result);
	putchar('\n');
}

void XOR(const char a[],const char b[])
{
	int i;
	char* result=calloc(size+1,sizeof(int));
	
	for(i=0;i<size;i++)
	{
		if((a[i]-'0')!=(b[i]-'0'))
			result[i]=1;
		else
			result[i]=0;
	}
	for(i=0;i<size;i++)
		printf("%d",result[i]);
	free(result);
	putchar('\n');
}

void NOT(const char a[])
{
	int i;
	char* result=calloc(size+1,sizeof(int));
	
	for(i=0;i<size;i++)
	{
		if((a[i]-'0')==1)
			result[i]=0;
		else
			result[i]=1;
	}
	for(i=0;i<size;i++)
		printf("%d",result[i]);
	free(result);
	putchar('\n');
}

int main() 
{
	char binary1[size+1];
	char binary2[size+1];
	scanf("%s",binary1); // 배열에 문자열로 입력받기
	scanf("%s",binary2);
	
	AND(binary1,binary2); // & : 피연산자가 모두 1인 경우만 1, 아니면 0 
	OR(binary1,binary2); // | : 피연산자가 모두 0인 경우만 0, 아니면 1
	XOR(binary1,binary2); // ^ : 피연산자가 서로 다르면 1, 같으면 0
	NOT(binary1); // ~ : 비트 반전 (1->0, 0->1)
	NOT(binary2);
	
	return 0;
}
