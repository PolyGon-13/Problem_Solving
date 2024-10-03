#include <iostream>
#include <unordered_set>

using namespace std;

// tmi) 자음=consonants, 모음=vowels
unordered_set<char> vowels={'a','e','i','o','u'};

bool is_vowels(char c)
{
	return vowels.find(c)!=vowels.end();
}

bool pwd_test(string &s)
{
	bool flag=false;
	int cnt_c=0,cnt_v=0;
	
	for(int i=0;i<s.size();i++)
	{
		if(is_vowels(s[i]))
		{
			flag=true;
			cnt_v++;
			cnt_c=0;
		}
		else
		{
			cnt_c++;
			cnt_v=0;
		}
		
		if(cnt_c>=3 || cnt_v>=3)
			return false;
		
		if(i>0 && s[i-1]==s[i] && !(s[i]=='e' || s[i]=='o'))
			return false;
	}
	
	if(!flag)
		return false;
	
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string pwd;
	int cnt=0;
	
	while(1)
	{
		cin>>pwd;
		
		if(pwd.compare("end")==0)
			break;
		
		if(pwd_test(pwd))
			cout<<"<"<<pwd<<">"<<" is acceptable.\n";
		else
			cout<<"<"<<pwd<<">"<<" is not acceptable.\n";
	}
	
	return 0;
}
