#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string input,target;
	
	cin>>input>>target;
	while(target.length()>input.length())
	{
		if(target.back()=='A') // 가장 끝 문자가 A인 경우
			target.pop_back(); // 가장 끝 문자 삭제
		else if(target.back()=='B')
		{
			target.erase(target.length()-1); // 가장 끝 문자 삭제
			reverse(target.begin(),target.end());
		}
	}
	
	if(target==input)
		cout<<"1\n";
	else
		cout<<"0\n";
	
	return 0;
}
