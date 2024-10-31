#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct
{
	string name;
	int day;
	int month;
	int year;
} Student;

bool cmp(Student& a,Student& b)
{
	if(a.year>b.year)
		return true; // true면 순서 교체
	else if(a.year==b.year)
	{
		if(a.month>b.month)
			return true;
		else if(a.month==b.month)
			return a.day>b.day;
	}
	return false;
}
	
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	vector<Student> student; // 구조체를 요소로 갖는 벡터 생성
	Student s; // 데이터를 입력받을 임시 구조체 s 생성
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s.name>>s.day>>s.month>>s.year;
		student.push_back({s.name,s.day,s.month,s.year}); // 입력받은 데이터를 벡터에 push
	}
	
	sort(student.begin(),student.end(),cmp);
	
	cout<<student[0].name<<'\n';
	cout<<student[n-1].name<<'\n';
	
	return 0;
}
