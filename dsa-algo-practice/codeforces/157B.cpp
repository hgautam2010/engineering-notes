#include <bits/stdc++.h>
using namespace std;
bool fun(int a,int b)
{
	return a>b;
}
int main()
{
	int n,i;
	double sum=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n,fun);
	if(n%2)
		sum+=(double)arr[n-1]*arr[n-1];
	for(i=0;i<n-1;i+=2)
	{
		sum+=(double)((double)arr[i]+arr[i+1])*((double)arr[i]-arr[i+1]);
	}
	cout<<setprecision(15)<<sum*3.14159265359f;
}
