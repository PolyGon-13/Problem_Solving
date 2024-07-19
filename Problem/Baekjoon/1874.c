#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100000

char result[SIZE*2];
int stack[SIZE];
int top=-1;

int main()
{
    int i,n;
    scanf("%d",&n);
    int *arr=calloc(n,sizeof(int));
    for(i=0;i<n;i++) // 목표 수열
        scanf("%d",&arr[i]);
        
    int num=1;
    int idx=0;
    int result_idx=0;
    while(1)
    {
        if(top==-1 || stack[top]<arr[idx])
        // 스택에 있는 수가 목표 수보다 낮은 경우
        {
            stack[++top]=num++;
            result[result_idx++]='+';
        }
        else if(stack[top]==arr[idx])
        // 스택 상단부분의 수가 목표 수와 같은 경우
        {
            top--;
            result[result_idx++]='-';
            idx++;
        }
        else
        // 스택의 상단부분의 수가 목표 수보다 높은경우
        {
            printf("NO\n");
            return 0;
        }
        if(result_idx==n*2) // n개의 숫자가 push 1번, pop 1번 수행됨
            break;
    }
    
    for(i=0;i<result_idx;i++)
        printf("%c\n",result[i]);
    
    return 0;
}
