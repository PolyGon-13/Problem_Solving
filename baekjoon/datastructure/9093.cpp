#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int i;
	int t;
	string str;
	stack<char> st;
	
	cin>>t;
	cin.ignore(); // cin 이후 getline을 사용하면 cin.ignore()을 사용해 버퍼를 비워주어야 함
	while(t--)
	{
		getline(cin,str);
		str+=' '; // 마지막 문자도 뒤집어야하므로 공백 추가
		
		for(i=0;i<str.size();i++)
		{
			if(str[i]==' ')
			{
				while(!st.empty()) // 스택이 빌 때까지 반복
				{
					cout<<st.top(); // 가장 꼭대기 요소를 출력
					st.pop(); // 가장 꼭대기 요소를 팝
				} 
				cout<<' '; // 모든 문자를 출력한 뒤에는 공백을 출력
			}
			else // i번째 문자가 공백이 아닌 경우 (스택에 푸시함)
				st.push(str[i]);
		} 
		cout<<'\n';
	}
	
	return 0;
}
