#include <stdio.h>

int main()
{
	int n,x,t,s,t1;
	int count=0;
	scanf("%d",&n);
	
	x=665;
	while(1)
	{
		t=x;
		s=x;
		while(s>0)
		{
			t=s%10;
			if(t==6)
			{
				t=s/10%10;
				if(t==6)
				{
					t=s/100%10;
					if(t==6)
					{
						t1=s/1000%10;
						count++;
						if(n==count)
						{
							printf("%d\n",x);
							return 0;
						}
					}
				}
			}
			if(t1==6)
			x++;
			s=s/10;
		}
		x++;
	}
	
	return 0;
}
