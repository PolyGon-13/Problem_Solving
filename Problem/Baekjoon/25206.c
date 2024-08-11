#include <stdio.h>
#include <string.h>

double fun_avg(char r[])
{
	if(!strcmp(r,"A+"))
		return 4.5;
	else if(!strcmp(r,"A0"))
		return 4.0;
	else if(!strcmp(r,"B+"))
		return 3.5;
	else if(!strcmp(r,"B0"))
		return 3.0;
	else if(!strcmp(r,"C+"))
		return 2.5;
	else if(!strcmp(r,"C0"))
		return 2.0;
	else if(!strcmp(r,"D+"))
		return 1.5;
	else if(!strcmp(r,"D0"))
		return 1.0;
	else if(!strcmp(r,"F"))
		return 0.0;
	return 0.0;
}
// 모든 학점에 대한 케이스를 분류하였지만, A,B,C,D,F 유무만 파악한 뒤 따라오는 문자열이 +인 경우에 0.5를 더해주는 방식이면 더 깔끔할듯

int main()
{
	char subject[51];
	char rank[3];
	double score;
	double credit=0.0;
	double c_avg=0.0;
	double sum=0.0;
	
	int i;
	for(i=0;i<20;i++)
	{
		scanf("%s %lf %s",subject,&score,rank);
		
		if(!strcmp(rank,"P"))
			continue;
		
		credit+=score;
		c_avg=fun_avg(rank);
		sum+=score*c_avg;
	}
	
	if(credit==0)
		printf("0.000000\n");
	else
		printf("%.6f\n",sum/credit);
	
	return 0;
}
