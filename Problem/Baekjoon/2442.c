#include <stdio.h>

int main() 
{
	int i,j,k;
	int n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-1;j++)
			printf(" ");
		
		for(k=0;k<2*i+1;k++)
			printf("*");
		
		putchar('\n');
	}
	
	return 0;
}
