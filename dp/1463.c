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
/*
x가 3의 배수인 경우를 예시로 들면,
3->1, 6->6/3+1, 9->9/3+1, 12->12/3+1
따라서 점화식은 dp[i]=dp[i/3]+1이고, 2인 경우도 동일
1을 빼는 경우도 고려해주어야 하기에 dp[i]=dp[i-1]+1을 설정하여 최솟값을 골라주는 작업을 진행
2와 3으로 나누어떨어지지 않으면 직전값+1이 dp[i]가 됨
*/
