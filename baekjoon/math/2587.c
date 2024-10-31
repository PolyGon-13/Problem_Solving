#include <stdio.h>

int* sort(int num[])
{
	int i,j,temp;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	} 
	// 배열의 0번째 수와 나머지 1~4번째 요소와 비교
	// 이어서 배열의 1번째 수와 나머지 0,2,3,4번째 요소와 비교
	
	return num;
}

int main()
{
	int i;
	int num[5];
	int sum=0;
	int avg=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	
	avg=sum/5;
	printf("%d\n",avg);
	sort(num);
	printf("%d",num[2]);
	
	return 0;
}

// 함수에 배열 전달법 및 배열 반환법
// 수 정렬 알고리즘
