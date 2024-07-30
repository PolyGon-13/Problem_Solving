#include <stdio.h>

#define pole 64

int main()
{
    int x;
    int sum = pole;
    int cnt = 0;
    scanf("%d", &x);

    while(x>0)
    {
        if(sum>x)
            sum /= 2; // 막대 길이의 합이 x보다 크면 절반으로 나누기
        else // 막대 길이의 합이 x보다 작은 경우
        {
            cnt++; // 나누어진 막대를 사용하므로 막대의 개수 하나 추가
            x -= sum; // 현재 막대 길이의 합을 빼주어 사용한 막대 제외시키기
        }
    }
    printf("%d\n", cnt);

    return 0;
}
