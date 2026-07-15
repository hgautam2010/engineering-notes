#include <bits/stdc++.h>
using namespace std;
int main()
{
	list<int> l1,l2;
	long long int n,i,a,sum=0;
	for(cin>>n;n--;)
	{
		cin>>a;
		sum+=a;
		if(a>0)
			l1.push_back(a);
		else
			l2.push_back(-a);
	}
	if(sum>0)
		cout<<"first"<<endl;
	else if(sum<0)
		cout<<"second"<<endl;
	else
	{
		if(l1>l2)
			cout<<"first"<<endl;
		else if(l1<l2)
			cout<<"second"<<endl;
		else if(a>0)
			cout<<"first"<<endl;
		else
			cout<<"second"<<endl;
	}
}
