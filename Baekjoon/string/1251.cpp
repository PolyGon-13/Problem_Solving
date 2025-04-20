#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;    
    cin>>str;
    
    string ans="z";
    string::size_type len=str.size();
    
    for(string::size_type i=0;i<len-2;++i)
    {
        for(string::size_type j=i+1;j<len-1;++j)
        {
            string part1=str.substr(0,i+1);
            string part2=str.substr(i+1,j-i);
            string part3=str.substr(j+1);
            
            reverse(part1.begin(),part1.end());
            reverse(part2.begin(),part2.end());
            reverse(part3.begin(),part3.end());
            
            string combined=part1+part2+part3;
            if(combined<ans)
                ans=combined;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
