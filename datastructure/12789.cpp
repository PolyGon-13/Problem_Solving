#include <iostream>
#include <array>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int num=1,cnt=0;
	int arr[1001]={0,};
	stack<int> s;
	
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	for(int i=0;i<n;i++)
	{
		if(s.empty() && cnt<n)
			s.push(arr[cnt++]);
		// 비어있으면 한 개 채우기
		
		while(s.top()!=num && cnt<n)
			s.push(arr[cnt++]);
		// stack의 top이 num이 되거나 arr 요소들 전부 push 할 때까지 push
		
		if(!s.empty() && s.top()==num) // stack이 비어있지 않고 top이 num인 경우
		{
			s.pop();
			num++;
		}
		else
		{
			cout<<"Sad"<<'\n';
			return 0;
		}
	}
	cout<<"Nice"<<'\n';
	
	return 0;
}
