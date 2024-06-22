#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n%2==0)
        printf("SK\n");
    else
        printf("CY\n");

    return 0;
}
// 경우에 수에 따라 random 함수를 써야하는가까지 생각했었지만 n이 1인 경우부터 몇 가지 경우를 나열해보면 n이 짝수일 때는 SK, 홀수일 때는 CY를 출력한다는 규칙을 발견할 수 있음