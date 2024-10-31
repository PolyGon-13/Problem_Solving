#include <stdio.h>

int main()
{
  int i,n,max;
  int cnt[10]={0,};
  scanf("%d",&n);

  while(n>0)
  {
    cnt[n%10]++;
    n/=10;
  }
  cnt[6]=(cnt[6]+cnt[9]+1)/2;

  max=0;
  for(i=0;i<9;i++) // 9는 6에 모두 반영했으므로 배제
  {
    if(max<cnt[i])
      max=cnt[i];
  }
  printf("%d\n",max);

  return 0;
}
