#include <stdio.h>

int main()
{
  int i,n,tmp;
  scanf("%d",&n);

  const int offset=1000;
  int arr[2001]={0,};

  for(i=0;i<n;i++)
  {
    scanf("%d",&tmp);
    arr[tmp+offset]++;
  }

  for(i=0;i<=2000;i++)
  {
    if(arr[i]>0)
      printf("%d ",i-offset);
  }
  putchar('\n');

  return 0;
}
// 입력받은 수에 해당하는 인덱스의 요솟값을 증가하는 방식 -> 중복되는 수가 있는지 찾을 필요도 없음 (요솟값이 0보다 크면 그냥 존재하는 것임)
// 다만 음수를 고려해야 하기에 배열을 2001의 크기로 설정하고 offset을 주어 해결함.

/*
// 정수를 입력받고 오름차순으로 정렬하고 중복을 지우는 문제 그대로의 방법임.
// 중복되는 인덱스에 원래는 NULL을 대입하였지만, 이는 포인터를 가리키지 않음을 의미하는 것으로 출력에 오류가 발생할 수도 있기에 문제에서 제한한 1000보다 큰 수를 대입하여 구별함.
#include <stdio.h>
#include <stdlib.h>

int compare(const int *a,const int *b)
{
  if(*a<*b)
    return -1;
  else if(*a>*b)
    return 1;
  else
    return 0;
}

int main()
{
  int n;
  scanf("%d",&n);
  int *x=calloc(n,sizeof(int));

  int i;
  for(i=0;i<n;i++)
    scanf("%d",&x[i]);

  qsort(x,n,sizeof(int),(int(*)(const void *,const void *))compare);

  int temp=x[0];
  for(i=1;i<n;i++)
  {
    if(temp==x[i])
      x[i]=1001;
    else
      temp=x[i];
  }

  for(i=0;i<n;i++)
  {
    if(!(x[i]>1000))
      printf("%d ",x[i]);
  }

  free(x);

  return 0;
}
*/
