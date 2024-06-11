#include <stdio.h>

int main() 
{
	int n,i;
	int s=0;
	
	while(1){
		scanf("%d",&n);
		if(n==-1) break;
		
		s=0;
		for(i=1;i<n;i++) if(n%i==0) s+=i;
		
		if(s==n){
			printf("%d = ",s);
			for(i=1;i<n;i++) if(n%i==0) printf(i != n-i ? "%d + " : "%d",i);
			printf("\n");
		}
		else printf("%d is NOT perfect.\n",n);
	}
	
	return 0;
}
// 주어진 수 n의 약수를 구하기 위해 for문을 이용해 1부터 n까지의 수를 나누어 나머지가 0인 수를 기록한다.
// 약수들의 합과 n이 같은 경우, 1부터 n-1 까지 증가하는 i와 n-i 가 같은지 여부로 출력이 달라지는데 이는 n의 약수 중 자신을 제외한 가장 큰 수는 n/2이기 때문이다. 따라서 i와 n-i이 같은 경우 즉, n/2인 경우 출력을 마무리한다.
