#include <stdio.h>

int main()
{
	int i,j,n,k,cnt;
	int arr[5001]={0,};
	scanf("%d %d",&n,&k);
	
	j=1;
	putchar('<');
	for(i=0;i<n;i++)
	{
		cnt=0; // 삭제할 위치를 카운트하기 위해 초기화
		while(1)
		{
			if(arr[j]==0) // 배열arr에서 j번째 사람이 삭제되지 않았다면 cnt 1증가
				cnt++;
			
			if(cnt==k) // k번째 사람을 찾은 경우
			{
				arr[j]=-1; // 해당 사람 제거
				if(i==n-1) // 마지막 사람을 제거하고 있는 경우
					printf("%d>",j);
				else
					printf("%d, ",j);
				
				break;
			}
			j++; // 다음 요소로 넘어가요
			if(j>n)
				j=1;
		}
	}
	putchar('\n');
	
	return 0;
}

// 배열의 모든 요소를 0으로 초기화한 뒤 사람을 제거했다면 -1로 바꾸는 방식
