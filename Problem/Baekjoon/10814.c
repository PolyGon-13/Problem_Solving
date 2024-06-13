#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int idx;
	int age;
	char name[101];
} member;

int compare(const void* first,const void* second)
{
	member* a=(member*)first;
	member* b=(member*)second;
	
	if(a->age < b->age)
		return -1;
	else if(a->age > b->age)
		return 1;
	else
	{
		if(a->idx < b->idx)
			return -1;
		else
			return 1;
	}
	
	return 0;
}

int main()
{
	int n;
	scanf("%d",&n);
	
	int i;
	member* list=malloc(n*sizeof(member));
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&list[i].age,list[i].name);
		list[i].idx=i;
	}
	
	qsort(list,n,sizeof(list[0]),compare);
	
	for(i=0;i<n;i++)
		printf("%d %s\n",list[i].age,list[i].name);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int idx;
	int age;
	char name[101];
} person;

int main()
{
	int n;
	scanf("%d",&n);
	person* list=(person*)calloc(n,sizeof(person));
	
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&list[i].age,list[i].name);
		list[i].idx=i;
	}
	
	person temp;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(list[i].age>list[j].age)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
			else if(list[i].age==list[j].age)
				if(list[i].idx>list[i].idx)
				{
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
				}
		}
	
	for(i=0;i<n;i++)
		printf("%d %s\n",list[i].age,list[i].name);
	
	return 0;
}
