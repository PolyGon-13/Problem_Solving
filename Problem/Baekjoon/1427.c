#include <stdio.h>
#include <string.h>

int main()
{
	char arr[10];
	scanf("%s",arr);
	
	char temp;
	int i,j;
	for(i=0;i<strlen(arr);i++)
		for(j=i+1;j<strlen(arr);j++)
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
	printf("%s\n",arr);
	
	return 0;
}

// 문자열을 배열에 입력
// 버블정렬을 이용해 배열을 내림차순으로 정렬
