#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	
	vector<int> vec1;
	vector<int> vec2;
	vec1.resize(n);
	vec2.resize(n);
	
	int i;
	for(i=0;i<n;i++)
	{
		cin>>vec2[i];
		vec1[i]=vec2[i];
	}
	
	sort(vec1.begin(),vec1.end()); // 오름차순 정렬
	
	vec1.erase(unique(vec1.begin(),vec1.end()),vec1.end());
	// unique 함수는 인접한 중복 원소를 배열의 끝으로 보내고, 중복된 원소들을 모아둔 뒷부분의 첫 번째 원소의 주소를 리턴
	// 중복된 원소들의 첫 번째부터 끝까지 erase
	
	for(i=0;i<n;++i)
		cout<<lower_bound(vec1.begin(),vec1.end(),vec2[i])-vec1.begin()<<' ';
	// lower_bound 함수는 이진탐색으로 원소를 탐색하여, 찾고자 하는 값보다 같거나 큰 숫자가 처음 등장하는 위치 반환
	/*
	vec1에는 정렬 및 중복제거된 원소들이, vec2에는 입력 그대로의 배열이 존재
	vec2의 i번째 요소를 vec1에서 찾은 후 해당 원소의 위치를 출력함 (vec1.begin()은 0이므로 값에 영향X)
	vec1은 오름차순으로 정렬되어 있으므로 값의 크기에 따른 압축좌표를 원소의 위치로 대체 가능
	*/
	
	return 0;
}
