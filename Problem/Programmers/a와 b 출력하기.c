#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    return 0;
}

/*
정말 쉬운 문제이고 당연히 위처럼 풀면 될줄 알았고 실제로 위 코드도 정답이지만 아래와 같은 괴랄한 코드의 정답안도 있어서 붙임
n;main(i){for(;~i;printf("%c = %d\n",98-i--,n))scanf("%d",&n);}
*/
