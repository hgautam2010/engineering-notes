#include <bits/stdc++.h>
using namespace std;
int main()
{
	long m,n,sum,i;
	cin>>n>>m;
	long arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr + n);sum=0;
	for(i=0;i<m && arr[i]<0;i++)
		sum+=arr[i];
	cout<<(-sum);
}
