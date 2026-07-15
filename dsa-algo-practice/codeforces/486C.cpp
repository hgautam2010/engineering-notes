#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,sum,l,r,f,i;
	string str;
	cin>>n>>p;
	cin>>str;
	p-=1;
	if(p>n/2-1)
		p=n-p-1;
	sum=0;
	for(i=0;i<n/2;i++)
		sum+=min(abs(str[i]-str[n-i-1]),26-abs(str[i]-str[n-i-1]));
	f=0;
	l=r=0;
	for(i=0;i<n/2;i++)
	{
		if(f==0 && str[i]!=str[n-i-1])
			{l=i;f=1;}
		if(str[i]!=str[n-i-1])
			r=i;
	}
	if(sum!=0 && l<=p && p<=r)
		sum+=min(abs(l-p),abs(r-p))+abs(l-r);
	else if(sum!=0)
		sum+=max(abs(l-p),abs(r-p));
	cout<<sum;
}
