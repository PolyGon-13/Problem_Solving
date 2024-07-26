#include <stdio.h>

int main()
{
  int i,j;
  int t,n,m,cnt,front,max;
  int que[100]={0,};
  scanf("%d",&t);
  
  while(t--)
  {
    scanf("%d %d",&n,&m);

    cnt=1;
    front=0;
    max=0;
    
    for(i=0;i<n;i++)
      scanf("%d",&que[i]); // n개의 문서의 중요도 입력

    while(1)
    {
      for(j=0;j<n;j++) // 중요도의 최댓값 찾기
        if(que[j]>max)
          max=que[j];

      while(que[front]!=max)
        front=(front+1)%n; // n을 초과해버리는 경우를 방지하기 위해 %n이 존재

      if(front==m)
        break;
      
      // 입력했던 m번째 문서가 아닌 경우
      que[front]=0; 
      // 현재 front는 가장 중요도가 높은 문서를 가리키고 있음. 
      // 해당 문서가 m과 일치하지 않으므로 cnt를 1 증가시키고 해당 인덱스의 요솟값을 지움.
      front=(front+1)%n;
      max=0;
      cnt++;
    }
    printf("%d\n",cnt); 
  }

  return 0;
}
// 배열의 요소들의 위치를 바꿔가는 방식이 아닌 원형큐 방식으로 front 값을 알맞게 옮기며 중요도가 가장 높은 값을 찾아감
