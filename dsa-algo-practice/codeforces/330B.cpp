#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,i,b;
	cin>>n>>m;
	int arr[n];
	memset(arr,0,sizeof(arr));
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
		arr[a-1]=1;arr[b-1]=1;
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
			{a=i+1;break;}
	}
	cout<<n-1<<endl;
	for(i=1;i<=n;i++)
		if(i!=a)
			cout<<a<<" "<<i<<endl;
	return 0;
}
