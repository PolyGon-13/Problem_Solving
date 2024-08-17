#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *first,const void *second) 
// qsort를 아래와 같이 사용하면 매개변수를 int *이 아닌 void *로 받아주어야 함 + (int *)로 형변환해서 다시 변수에 넣어줘야 함
{
	int *a=(int*)first;
	int *b=(int*)second;
	
	if(*a<*b)
		return -1;
	else if(*a>*b)
		return 1;
	else
		return 0;
}

int arith(int list[],int n)
{
	int i;
	double sum=0;
	
	for(i=0;i<n;i++)
		sum+=list[i];
	
	return round(sum/n);
	// ceil(double_X) : 올림
	// round(double_X) : 반올림
	// floor(double_X) : 내림
}

int median(int list[],int n)
{
	if(n==1)
		return list[0];
	else
		return list[(n+1)/2-1];
}

int mode(int list[],int n)
{
	int ar[8001]={0,}; // 입력되는 정수는 4000을 넘지 않음
	int i,idx;
	int max=0;
	int cnt=0;
	
	for(i=0;i<n;i++)
	{
		idx=list[i]+4000; // list 배열 안에 있는 요소들 모두 탐색
		ar[idx]+=1; // 존재하면 1을 더함
		
		if(ar[idx]>max)
			max=ar[idx]; // 최빈값을 찾기 위해 최빈값의 등장횟수를 max변수에 갱신
	}
	// 이 과정을 거치면 ar배열에는 list 배열에 있는 수에 해당하는 인덱스의 값이 개수만큼 증가해있을 것임
	// 추가로 최빈값의 출현횟수가 max에 저장되어 있음
	
	for(i=0,idx=0;i<8001;i++)
	{
		if(ar[i]==0) // list 배열에 존재하지 않는다는 뜻이므로 패스
			continue;
		if(ar[i]==max) // 최대횟수를 가진 요소를 만난 경우
		{
			if(cnt==0) // 최초 최빈값
			{
				idx=i; // i는 ar의 요소를 탐색하기 위한 변수로, idx는 최빈값에 해당하는 수를 저장하는 용도로 사용됨
				cnt+=1;
			}
			else if(cnt==1) // 2번째 최빈값
			{
				idx=i;
				break;
			}
		}
	}
	
	return idx-4000; // 앞에서 4000을 더해주어 계산을 진행하였으므로 다시 4000을 빼줌
}

int range(int list[],int n)
{
	return list[n-1]-list[0];
}


int main()
{
	int i,n;
	int *list;
	scanf("%d",&n);
	list=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
		scanf("%d",&list[i]);
	
	qsort(list,n,sizeof(list[0]),compare); // 비교함수 앞에 (int(*)(const void *,const void *)) 안 붙이고 qsort함수 사용하기
	
	printf("%d\n",arith(list,n));
	printf("%d\n",median(list,n));
	printf("%d\n",mode(list,n));
	printf("%d\n",range(list,n));
	
	return 0;
}
