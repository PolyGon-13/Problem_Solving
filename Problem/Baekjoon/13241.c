#include <stdio.h>

long long int gcd(long long int a,long long int b)
{
  while(b!=0)
  {
    long long int temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}

long long int lcm(long long int a,long long int b)
{
  return a*b/gcd(a,b);
}

int main()
{
  long long int a,b;
  scanf("%lld %lld",&a,&b);

  long long int result=lcm(a,b);
  printf("%lld\n",result);

  return 0;
}

// 유클리드 호제법
// GCD(A,B) = GCD(B,A mod B)
// GCD는 최대공약수, A mod B는 A를 B로 나눈 나머지

// 최소공배수 공식
// LCM(A,B) = abs(a*b) / GCD(A,B)
