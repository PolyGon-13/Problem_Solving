#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	double x1,y1,x2,y2,x3,y3;
	double diff1,diff2;
	double len1,len2,len3;
	vector<double> sq(3,0);
	
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	bool collinear=false;
	if(x2-x1==0 && x3-x2==0) // 모두 수직선 상에 있는 경우
		collinear=true;
	else if(x2-x1!=0 && x3-x2!=0) // 기울기 비교 가능한 경우
	{
		diff1=(y2-y1)/(x2-x1);
		diff2=(y3-y2)/(x3-x2);
		if(diff1==diff2)
			collinear=true;
	}
	
	if(collinear)
	{
		cout<<"-1\n";
		return 0;
	}
	
	len1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	len2=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	len3=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	
	sq[0]=(len1+len2)*2;
	sq[1]=(len1+len3)*2;
	sq[2]=(len2+len3)*2;
	
	sort(sq.begin(),sq.end());
	
	cout<<fixed;
	cout.precision(10);
	
	cout<<sq[2]-sq[0];
	
	return 0;
}
