#include <iostream>

using namespace std;

int arr[101];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m,x,gender,num;
	
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	
	cin>>m;
	while(m--)
	{
		cin>>gender>>num;
		
		if(gender==1)
		{
			for(int i=num;i<=n;i+=num)
				arr[i]=!arr[i];
		}
		else if(gender==2)
		{
			arr[num]=!arr[num];
			
			int left=num-1;
			int right=num+1;
			
			while(left>0 && right<=n && arr[left]==arr[right])
			{
				arr[left]=!arr[left];
				arr[right]=!arr[right];
				left--;
				right++;
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i]<<" ";
		if(i%20==0)
			cout<<'\n';
	}
	
	return 0;
}
