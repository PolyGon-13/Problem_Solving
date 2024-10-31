#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x;
	priority_queue<int,vector<int>,greater<int>> pq;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>x;
			pq.push(x);
		}
		while(pq.size()>n) // 상위 n개만 남기고 전부 pop (해당 과정을 거치지 않으면 메모리 초과 발생)
			pq.pop();
	}
	cout<<pq.top()<<'\n';
	
	return 0;
}

/*
#include <iostream>
#include <algorithm>

using namespace std;

int arr[2250010]; // 4*2250010=9.00004이므로 약 9MB를 사용

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	
	cin>>n;
	for(int i=0;i<n*n;i++)
		cin>>arr[i];
	
	sort(arr,arr+n*n);
	// arr는 배열의 시작지점을 가리키는 포인터
	
	cout<<arr[n*n-n]<<'\n';
	// 오름차순으로 정렬되므로 가장 끝에서 n번째 수를 찾으면 됨
	
	return 0;
}
*/
