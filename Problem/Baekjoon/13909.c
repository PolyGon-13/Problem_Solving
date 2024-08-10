#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int a=1;
	int i;
	for(i=2;i*i<n+1;i++)
		a+=1;
	
	printf("%d\n",a);
	
	return 0;
}
