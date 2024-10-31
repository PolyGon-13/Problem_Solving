#include <stdio.h>
#include <math.h>

int st=2;
int result=0;

int middle(int i)
{
	st=st+pow(2,i);
	result=pow(st,2);
}

int main()
{
	int i;
	int n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		middle(i);
	printf("%d\n",result);
	
	return 0;
}
