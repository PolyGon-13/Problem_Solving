#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int sum=0;
	string str,num;
	bool flag=false;
	
	cin>>str;
	for(int i=0;i<=str.size();i++)
	{
		if(str[i]=='+' || str[i]=='-' || i==str.size())
		{
			if(flag) // 직전에 - 가 입력
			{
				sum-=stoi(num);
				// 최솟값을 얻기 위해서는 - 이후에 전부 빼면 됨
				num="";
			}
			else
			{
				sum+=stoi(num);
				num="";
			}
		}
		else
			num+=str[i]; // 숫자면 문자열에 추가
		
		if(str[i]=='-')
			flag=true;
	}
	cout<<sum<<'\n';
	
	return 0;
}
