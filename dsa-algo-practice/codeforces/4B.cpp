#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d,s,tot,mn,mx,i,a[40],b[40];
	cin>>d>>s;mn=mx=0;
	for(i=0;i<d;i++)
	{
		cin>>a[i]>>b[i];
		mn+=a[i];
		mx+=b[i];
	}
	if(s<mn || s>mx)
		cout<<"NO";
	else
	{
		cout<<"YES"<<endl;
		for(i=0;i<d;i++)
		{
			assert(s-mn>=0);
			if(s-mn==0)
			{
				cout<<a[i]<<" ";
			}
			else
			{
				if(s-mn>=b[i]-a[i])
				{
					cout<<b[i]<<" ";
					s-=b[i];
					mn-=a[i];
					mx-=b[i];
				}
				else
				{
					cout<<a[i]+s-mn<<" ";
					s=mn;
				}
			}
		}
	}
	return 0;
}
