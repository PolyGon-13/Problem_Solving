#include <stdio.h>

int main()
{
	int x,y;
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	
	printf("%d %d\n",x,y);
	
	return 0;
}
