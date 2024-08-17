#include <stdio.h>

int cnt=0;
int n1[10000000];
int n2[10000000];

void move(int n,int x,int y)
{
	if(n>1)
		move(n-1,x,6-x-y);
	
	n1[cnt]=x;
	n2[cnt]=y;
	cnt++;
	
	if(n>1)
		move(n-1,6-x-y,y);
}

int main()
{
	int i;
	int n;
	scanf("%d",&n);
	move(n,1,3);
	
	printf("%d\n",cnt);
	for(i=0;i<cnt;i++)
		printf("%d %d\n",n1[i],n2[i]);
	
	return 0;
}
