#include <stdio.h>

int main()
{
	int i,j;
	int arr[9];
	int check[9]={0,};
	int sum=0;
	int find=0;
	
	for(i=0;i<9;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	
	sum-=100; // 주어진 수들의 총합을 구한 뒤 목표값인 100을 빼준다.
	
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(arr[i]+arr[j]==sum) // sum에서 100을 빼준 값은 제외된 두 수의 합
			{
				check[i]=check[j]=1; // 제외된 요소의 값은 1(참)으로 변경
				find=1;
				break;
			}
		}
		if(find)
			break;
	}
	
	for(i=0;i<9;i++)
		if(!check[i]) // 0(거짓)은 사용되는 요소, 1(참)은 제외되는 요소
			printf("%d\n",arr[i]);
	
	return 0;
}
