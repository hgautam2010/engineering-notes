#include <bits/stdc++.h>
using namespace std;
long brr[1000002];
int main()
{
	long int  n,m,i,a,c;
	cin>>n>>m;
	vector<int> v;
	for(i=0;i<n;i++)
		{cin>>a;v.push_back(a);}
	for(i=0;i<m;i++)
		{cin>>a;brr[a]++;}
	for(i=1000000;i>=0;i--)
		brr[i]=brr[i]+brr[i+1];
	sort(v.begin(),v.end());
	a=c=0;
	for(i=v.size()-1;i>=0;i--)
		if(brr[v[i]]-c>0)
			c++;
		else
			a++;
	cout<<a<<endl;
}
