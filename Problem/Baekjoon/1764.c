#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(void *a,void *b)
{
	return strcmp(a,b);
}

typedef struct
{
	char input[21];
} name;

typedef struct
{
	char save[21];
} ans;

name str1[1000001];
ans str2[500001];

int main() 
{
	int i;
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n+m;i++)
		scanf("%s",str1[i].input);
	// '듣도 못한 사람'과 '보도 못한 사람'을 n+m으로 한꺼번에 입력받음
	
	qsort(str1,n+m,sizeof(str1[0]),(int(*)(const void *,const void *))compare);
	// 한꺼번에 입력받은 배열 str1을 정렬
	
	int idx=0;
	for(i=0;i<n+m;i++)
		if(strcmp(str1[i].input,str1[i+1].input)==0)
			strcpy(str2[idx++].save,str1[i++].input);
	// str1의 연속된 요소가 같다면 str2에 복붙
	
	printf("%d\n",idx);
	for(i=0;i<idx;i++)
		printf("%s\n",str2[i].save);
	
	return 0;
}

/*
// 시간초과
// 2차원 배열을 이용하여 최대 20자리의 '듣도 못한 사람'에 해당하는 문자열을 입력받고
// '보도 못한 사람'에 해당하는 문자열을 반복문을 통해 입력받고 판단하는 방식
#include <stdio.h>
#include <string.h>

char str[500000][21];
char ans[500000][21];
char check[21];

int main() 
{
	int i,j;
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
	
	int cnt=0;
	int ans_idx=0;
	for(i=0;i<m;i++)
	{
		scanf("%s",check);
		for(j=0;j<n;j++)
		{
			if(strcmp(str[j],check)==0)
			{
				strcpy(ans[ans_idx++],check);
				cnt++;
				break;
			}
		}
	}
	
	printf("%d\n",cnt);
	for(i=0;i<ans_idx;i++)
		printf("%s\n",ans[i]);
	
	return 0;
}
*/
