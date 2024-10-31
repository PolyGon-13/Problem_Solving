#include <iostream>
#include <array>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	array<char,4> target={'U','C','P','C'};
	
	getline(cin,str);
	
	int k=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==target[k])
			k++;
		
		if(k==4)
		{
			cout<<"I love UCPC\n";
			return 0;
		}
	}
	cout<<"I hate UCPC\n";
	
	return 0;
}
