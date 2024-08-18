#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

int i;
int t,n;
string strp,strn;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin>>t;
	while(t--)
	{
		cin>>strp;
		cin>>n;
		cin>>strn;
		
		deque<int> dq;
		bool flag=true;
		bool dir=true;
		string temp="";
		
		for(i=1;i<strn.size();i++)
		{
			if(strn[i]==',' || strn[i]==']') // ,나 ]인 경우 temp에 추가시킨 문자열 계산
			{
				if(temp!="") // temp가 비어있지 않은 경우
				{
					dq.push_back(stoi(temp)); // temp를 int형으로 바꾸어 푸시
					temp=""; // 다시 빈 문자열로 만듦
				}
			}
			else // ,나 ]인 경우 temp에 문자열을 추가시킴
				temp+=strn[i];
		}
		
		for(i=0;i<strp.size();i++)
		{
			if(strp[i]=='R')
				dir=!dir; // dir이 false인 경우는 R명령에 의해 배열이 뒤집힌 상황
			else if(strp[i]=='D')
			{
				if(dq.empty())
				{
					flag=false;
					break; // dq가 비어있는데 D명령이 들어온 상황이므로 flag를 false로 바꾸고 반복문 중단
				}
				else
				{
					if(dir) // 정상 배열
						dq.pop_front();
					else // 뒤집힌 배열
						dq.pop_back();
				}
			}
		}
		
		if(!flag) // D명령이 들어왔는데 dq가 비어있는 상황에 실행
			cout<<"error"<<'\n';
		else
		{
			if(!dir)
				reverse(dq.begin(),dq.end()); // algorithm 라이브러리에 존재하는 함수
				// 위에서는 dir에 따른 pop 위치만 다르게 했음
				// 실제 출력에서는 배열을 뒤집을 필요가 있음
			cout<<"[";
			
			for(i=0;i<dq.size();i++)
			{
				if(i==dq.size()-1)
					cout<<dq[i]; // dp.size()-1은 ] 직전의 마지막 수임
				else
					cout<<dq[i]<<",";
			}
			cout<<"]"<<'\n';
		}
	}
	
	return 0;
}
