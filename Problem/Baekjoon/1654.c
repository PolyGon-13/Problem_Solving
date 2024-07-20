#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int k,n;
    int cnt=0;
    int max=0;
    scanf("%d %d",&k,&n);
    int *x=calloc(k,sizeof(int));
    for(i=0;i<k;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]>max)
            max=x[i];
    }

    long long left,mid,right,result=0;
    left=1;
    right=max;
    while(left<=right)
    {
        mid=(left+right)/2;
        cnt=0;
        for(i=0;i<k;i++)
            cnt+=x[i]/mid;

        if(cnt>=n)
        {
            if(result<mid)
                result=mid;
            left=mid+1;
        }
        else
            right=mid-1;
    }
    printf("%lld\n",result);
    free(x);

    return 0;
}

/*
