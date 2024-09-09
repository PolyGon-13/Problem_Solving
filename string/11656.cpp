#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string word;
	int len;
	
	cin>>word;
	len=word.length();
	string arr[len]={}; // 문자열을 저장하는 배열을 생성
	
	for(int i=0;i<len;i++)
		arr[i]=word.substr(i,len);
	// substr 함수 : i부터 len전까지 문자열을 자름
	
	sort(arr,arr+len);
	
	for(int i=0;i<len;i++)
		cout<<arr[i]<<'\n';
	
	return 0;
}
