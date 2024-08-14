#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string str,result;
	getline(cin,str);
	str+=' ';
	
	stack<char> st;
	
	int i=0;
	int len=str.length();
	
	while(i<=len)
	{
		if(str[i]=='<')
		{
			if(!st.empty()) // 스택이 비어있지 않은 경우
			{
				while(!st.empty()) // 문자열이 이어지다가 공백없이 '<' 문자를 만난 경우
				{
					result+=st.top();
					st.pop(); // 모두 팝하고 '<' 문자도 추가
				}
				result+='<';
				i++;
			}
			
			while(str[i]!='>') // '>' 문자가 나올때까지 str의 문자를 result에 추가
				result+=str[i++];
			
			result+=str[i++]; // 마지막 '>' 문자도 추가하기 위함
		}
		else
		{
			st.push(str[i]);
			
			if(str[i]==' ')
			{
				st.pop(); // 공백 팝
				while(!st.empty()) // 스택이 빌 때까지 스택에 추가한 str 문자들 팝.
				{
					result+=st.top();
					st.pop(); // '<'와 '>' 관련 문자들도 이미 들어있을 수도 있고 들어있다면 같이 팝
				}
				result+=' ';
			}
			i++;
		}
	}
	cout<<result<<endl;
	
	return 0;
}

// < > 안 문자들은 뒤집을 필요가 없으므로 바로 결과 문자열 result에 추가
// 그 외의 문자들을 스택을 거쳐서 뒤집어서 출력
