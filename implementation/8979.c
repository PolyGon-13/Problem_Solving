#include <stdio.h>

typedef struct
{
	int num;
	int gold;
	int sil;
	int bro;
	int val;
} ol;

int main() 
{
	int i,j;
	int n,k;
	scanf("%d %d",&n,&k);
	
	ol order[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&order[i].num,&order[i].gold,&order[i].sil,&order[i].bro);
		order[i].val=1;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(order[i].gold<order[j].gold)
				order[i].val++;
			else if(order[i].gold==order[j].gold)
			{
				if(order[i].sil<order[j].sil)
					order[i].val++;
				else if(order[i].sil==order[j].sil)
				{
					if(order[i].bro<order[j].bro)
						order[i].val++;
				}
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(order[i].num==k)
		{
			printf("%d",order[i].val);
			break;
		}
	}
	
	return 0;
}
