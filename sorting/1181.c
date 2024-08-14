#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char word[20000][51];

int stringcomp(const void* a,const void* b)
{
	const char* word2=(const char*)a;
	const char* word3=(const char*)b;
	int x=strlen(word2);
	int y=strlen(word3);
	
	if(x<y)
		return -1;
	else if(x>y)
		return 1;
	else
		return strcmp(word2,word3);
}

int main()
{
	int i;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",word[i]);
	
	qsort(word,n,51*sizeof(char),stringcomp);
	// qsort(배열의 주소, 요소의 개수, 요소 하나의 크기*요소의 개수, 비교함수)
	// 비교함수는 왼쪽이 앞서면 -1, 오른쪽이 앞서면 1, 같으면 0을 return하는 함수여야 함
	
	printf("%s\n",word[0]);
	for(i=1;i<n;i++)
		if(strcmp(word[i-1],word[i]))
			printf("%s\n",word[i]); // 앞의 문자열과 같은 문자열이면 출력하지 않음
	
	return 0;
}
