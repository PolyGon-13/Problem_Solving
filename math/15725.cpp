#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i;
	int idx=-1;
	string s;
	cin>>s;
	for(i=0;i<s.size();i++)
		if(s[i]=='x')
			idx=i;
	
	if(idx==-1) // 주어진 문자열에 x가 없는 경우 (정수식)
		cout<<"0"<<'\n';
	else if(idx==0 || (idx==1 && s[0]=='-'))
	// x의 계수가 1이거나, -1인 경우
	{
		if(idx==0)
			cout<<"1"<<'\n';
		else
			cout<<"-1"<<'\n';
	}
	else
	{
		for(i=0;i<idx;i++)
			cout<<s[i];
		cout<<'\n';
		/*
		s[idx]=0;
		cout<<s.c_str()<<'\n';
		
		c언어는 문자열을 '\0'까지 출력하므로 x가 있는 위치에 0을 넣고,
		문자열 s를 c언어 스타일로 출력하는 c_str()함수를 이용하는 방법
		*/
	}
	
	return 0;
}
