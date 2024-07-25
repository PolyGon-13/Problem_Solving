#include <stdio.h>

int main()
{
  int n,a,b;
  scanf("%d %d %d",&n,&a,&b);

  int cnt=0;
  while(n)
  {
    a-=2;
    if(a<0)
    {
      b-=1;
      if(b<0)
        break;
    }
    n--;
    cnt++;
  }
  printf("%d\n",cnt);

  return 0;
}
