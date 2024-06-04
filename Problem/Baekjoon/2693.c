#include <stdio.h>
#define n 3

void sort(int arr[])
{
	int j,k,temp;
	
	for(j=0;j<10;j++)
	{
		for(k=j+1;k<10;k++)
		{
			if(arr[j]>arr[k])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
}

int main() 
{
	int i,j,k;
	int t;
	int arr[10];
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		for(j=0;j<10;j++)
			scanf("%d",&arr[j]);
		
		sort(arr);
		
		printf("%d\n",arr[10-n]);
	}
	
	return 0;
}
