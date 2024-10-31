#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	map<string,int> book;
	int n;
	string book_name;
	
	cin>>n;
	
	while(n--)
	{
		cin>>book_name;
		
		if(book.find(book_name)==book.end())
			book.insert({book_name,1});
		else
			book[book_name]++;
	}
	
	int max=0;
	string res;
	for(auto &i:book)
	{
		if(i.second>max)
		{
			res=i.first;
			max=i.second;
		}
	}
	cout<<res<<'\n';
	
	return 0;
}
