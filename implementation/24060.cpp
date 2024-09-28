#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void merge_sort(array<int,500001>& a,int start,int end,int k);
void merge(array<int,500001>& a,int p,int q,int r,int k);

int cnt=0;
array<int,500001> a;

void merge_sort(array<int,500001>& a,int start,int end,int k)
{
	int p=start;
	int r=end;
	int q;
	
	if(p<r)
	{
		q=(p+r)/2;
		merge_sort(a,p,q,k);
		merge_sort(a,q+1,r,k);
		merge(a,p,q,r,k);
	}
}

void merge(array<int,500001>& a,int p,int q,int r,int k)
{
	int tmp[r+2];
	int i=p;
	int j=q+1;
	int t=1;
	
	while(i<=q && j<=r)
	{
		if(a[i]<=a[j])
			tmp[t++]=a[i++];
		else
			tmp[t++]=a[j++];
	}
	
	while(i<=q)
		tmp[t++]=a[i++];
	
	while(j<=r)
		tmp[t++]=a[j++];
	
	i=p;
	t=1;
	
	while(i<=r)
	{
		a[i++]=tmp[t++];
		
		if(++cnt==k)
			cout<<tmp[t-1]<<'\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,k;
	
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	merge_sort(a,0,n-1,k);
	
	if(cnt<k)
		cout<<"-1\n";
	
	return 0;
}
