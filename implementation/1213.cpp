#include <iostream>
#include <string>

using namespace std;

int cnt[200];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char mid;
	int flag=0;
	string str,res;
	
	cin>>str;
	for(char a:str)
		cnt[a]++;
	for(int i='Z';i>='A';i--)
	{
		if(cnt[i])
		{
			if(cnt[i]&1) // 문자 개수가 홀수인 경우 (비트연산자 &를 이용한 홀수or짝수 판별)
			{
				mid=char(i);
				flag++;
				cnt[i]--;
			}
			if(flag==2) // 홀수개인 문자가 2개 이상
			{
				cout<<"I'm Sorry Hansoo\n";
				return 0;
			}
			for(int j=0;j<cnt[i];j+=2)
			{
				res=char(i)+res; // res 앞에 i 붙임
				res+=char(i); // res 뒤에 i 붙임
			}
		}
	}
	if(mid)
		res.insert(res.begin()+res.size()/2,mid);
	
	cout<<res<<'\n';
	
	return 0;
}
