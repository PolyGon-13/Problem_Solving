#include <stdio.h>

int main()
{
    long long int n=0,s=0,sum=0;
    scanf("%lld",&s);

    while(1)
    {
        n++;
        sum+=n;
        if(sum>s)
        {
            n--;
            break;
        }
    }
    printf("%lld\n",n);

    return 0;
} 
