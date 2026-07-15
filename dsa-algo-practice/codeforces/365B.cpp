#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,c,mx;
	cin>>n;
	int arr[n];
	if(n!=1)
		c=mx=2;
	else
		mx=c=1;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=2;i<n;i++)
	{
		if(arr[i-1] + arr[i-2]==arr[i])
			c++;
		else
			c=2;
		if(mx<c)
			mx=c;
	}
	cout<<mx<<endl;
	return 0;
}
