#include<bits/stdc++.h>
using namespace std;

int n;

int check(int l,int r){
	int i,c=l+n-r,x;
	cout<<"? "<<c<<' ';
	for(i=0;i<l;i++)cout<<i+1<<' ';
	for(i=r;i<n;i++)cout<<i+1<<' ';
	cout<<endl;
	cin>>x;
	if(x%2==c%2)return 1;
	return 0;
}
vector<int>ansv;
int main(){
	int T,i,l,r,mid,p;
	for(cin>>T;T>0;T--)
	{
		cin>>n;
		n=n*2+1;
		p=0;
		for(i=0;i<3;i++)
		{
			l=p;
			r=n;
			while(r-l>1)
			{
				mid=(l+r)/2;
				if(check(p,mid))r=mid;
				else l=mid;
			}
			ansv.push_back(l);
			p=l+1;
		}
		cout<<"! ";
		for(i=0;i<3;i++)cout<<ansv[i]+1<<' ';
		cout<<endl;
		ansv.clear();
	}
	return 0;
}
