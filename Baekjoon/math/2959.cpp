#include <iostream>
#include <algorithm>
 
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int arr[4]={0,};
	
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	sort(arr,arr+4);
	cout<<arr[0]*arr[2]<<'\n';
	// 가장 큰 변만큼 첫 이동
	// 가장 작은 변만큼 오른쪽으로 방향을 바꾸어 이동
	// 두 번째로 큰 변만큼 오른쪽으로 방향을 바꾸어 이동
	// 두 번째로 작은 변만큼 오른쪽으로 방향을 바꾸어 이동
	
	return 0;
}
