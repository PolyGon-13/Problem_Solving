#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i,j;
	string str;
	set<string> result;
	// set 자료구조는 중복을 없애고 삽입하는 순서에 상관없이 정렬돼서 입력됨 (이진트리)
	
	cin>>str;
	
	int len=str.length();
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
			result.insert(str.substr(i,j-i+1));
			// substr(시작지점, 길이) 함수는 시작지점부터 길이만큼의 문자열을 리턴함
	}
	
	cout<<result.size()<<'\n';
	
	return 0;
}

/*
// substr 함수가 아닌 string 문자열에 누적시켜가며 set에 넣는 풀이
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int i,j;
	string s;
	set<string> set;
	
	cin>>s;
	
	string str="";
	for(i=0;i<s.size();i++)
	{
		for(j=i;j<s.size();j++)
		{
			str+=s[j]; // 하나씩 누적시켜가며 계속 set에 넣음
			set.insert(str);
		}
		str=""; // 한 사이클이 끝나면 str 초기화
	}
	cout<<set.size();
	
	return 0;
}
*/
