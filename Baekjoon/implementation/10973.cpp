#include <iostream>
#include <algorithm>

using namespace std;

int arr[10001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int idx=0;
	
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	
	for(int i=n-1;i>=1;i--)
	{
		if(arr[i]>arr[i+1]) // 뒤에서부터 수의 크기변화가 발생하는 부분을 탐색
		{
			idx=i;
			break;
		}
	}
	if(idx==0)
	{
		cout<<"-1\n";
		return 0;
	}
	
	int tmp=arr[idx];
	int tmp_idx=idx;
	for(int i=idx+1;i<=n;i++)
	{
		if(arr[i]<arr[idx]) // 탐색한 인덱스를 기준으로 해당 수보다 더 큰 수를 탐색
		{
			tmp=arr[i];
			tmp_idx=i;
		}
	}
	
	swap(arr[idx],arr[tmp_idx]);
	sort(arr+idx+1,arr+1+n,greater<>()); // 교환 지점 뒤에 숫자들 내림차순 정렬
	
	for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
	cout<<'\n';
	
	return 0;
}

/*
// 함수를 이용한 날먹 풀이
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,x;
	vector<int> v;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	
	if(prev_permutation(v.begin(),v.end()))
	{
		for(int i=0;i<n;i++)
			cout<<v[i]<<" ";
	}
	else
		cout<<"-1\n";
	
	return 0;
}
*/
