#include <stdio.h>
#define min(A,B) A<B?A:B

int arr[1000001];

int main()
{
	int x;
	scanf("%d",&x);
	
	int i;
	for(i=2;i<=x;i++)
	{
		arr[i]=arr[i-1]+1; // 우선 1을 뺀 경우를 arr[i]에 저장
		if(i%3==0)
			arr[i]=min(arr[i],arr[i/3]+1); // 3으로 나눈 경우와 1을 뺀 경우 중 더 작은 것을 선택
		if(i%2==0)
			arr[i]=min(arr[i],arr[i/2]+1); // 2로 나눈 경우와 1을 뺀 경우 중 더 작은 것을 선택
	} // for문을 통해 1은 0이므로, 2부터 x까지 해당 작업을 반복
	printf("%d",arr[x]);
	
	return 0;
}
// https://canoe726.tistory.com/39
