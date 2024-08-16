#include <stdio.h>

int main()
{
	int a=1,b=1,c=1;
	int e,s,m;
	int year=1;
	scanf("%d %d %d",&e,&s,&m);
	
	while(1)
	{
		if(a>15)
			a=1;
		if(b>28)
			b=1;
		if(c>19)
			c=1;
		
		if(a==e && b==s)
			if(c==m)
				break;
		
		a++;
		b++;
		c++;
		year++;
	}
	printf("%d\n",year);
	
	return 0;
}
